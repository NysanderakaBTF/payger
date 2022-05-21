#include "base_c2.h"
#include <iostream>
using namespace std;
base_c2::base_c2(base* b, std::string n) :base(b, n) { n_class = 2; }

void base_c2::signal(std::string& mes)
{
	if (status) {
		cout << endl << "Signal from " << get_abs_cord();
		mes += " (class: 2)";
	}
}
void base_c2::handler(const std::string& mes)
{
	if (status)
	cout << endl << "Signal to " << get_abs_cord() << " Text: " << mes;
}
