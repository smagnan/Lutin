#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <sstream>
#include <vector>

/* //NOT WORKING PROPERLY -> errors
#define max(a,b) \
   	({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

#define min(a,b) \
   	({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; }) */

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

namespace Utils
{
	std::string doubleToString(double val);
    double stringToDouble(std::string str);
    // splits with a delimiter, keep the delimiter or not -> keepChar
    unsigned int split(const std::string &txt, std::vector<std::string> &strs, char ch, bool keepChar);
    // splits with multiple delimiters, keep all the delimiter
    unsigned int split(const std::string &txt, std::vector<std::string> &strs, std::string chars);
}

#endif
