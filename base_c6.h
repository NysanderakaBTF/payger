#ifndef BASE_C6_H
#define BASE_C6_H
#include "base.h"
class base_c6 :
	public base
{
public:
	base_c6(base*, std::string = "Default_name");
	void signal(std::string&);
	void handler(const std::string&);
};
#endif

