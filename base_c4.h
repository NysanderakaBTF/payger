#ifndef BASE_C4_H
#define BASE_C4_H
#include "base.h"
class base_c4 :
	public base
{
public:
	base_c4(base*, std::string = "Default_name");
	void signal(std::string&);
	void handler(const std::string&);
};
#endif
