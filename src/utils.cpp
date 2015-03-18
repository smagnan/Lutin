#include "utils.h"

std::string Utils::doubleToString(double val)
{
	std::ostringstream strs;
	strs << val;
	return strs.str();
}

double Utils::stringToDouble(std:: str)
{
    std::istringstream i(str);
    double ret;
    if (!(i>>x))
        return 0;
    return ret;
}
