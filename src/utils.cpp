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

unsigned int Utils::split(const std::string &txt, std::vector<std::string> &strs, char ch)
{
	// thx: http://stackoverflow.com/questions/5888022/split-string-by-single-spaces
    unsigned int pos = txt.find( ch );
    unsigned int initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != std::string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos /*+ 1*/ ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, std::min( pos, txt.size() ) - initialPos + 1 ) );

    return strs.size();
}
