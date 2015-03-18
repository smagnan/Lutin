#include "utils.h"

std::string Utils::doubleToString(double val)
{
	std::ostringstream strs;
	strs << val;
	return strs.str();
}

double Utils::stringToDouble(std::string str)
{
    std::istringstream i(str);
    double ret;
    if (!(i>>ret)) // TODO it was !(i>>x) => not working, so I changed x to ret
        return 0;
    return ret;
}
