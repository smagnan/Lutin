#include <string>
#include <sstream>
#include <vector>

namespace Utils
{
	std::string doubleToString(double val);
    double stringToDouble(std::string str);
    unsigned int split(const std::string &txt, std::vector<std::string> &strs, char ch);
}
