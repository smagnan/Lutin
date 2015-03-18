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
    if (!(i>>ret))
        return 0;
    return ret;
}
