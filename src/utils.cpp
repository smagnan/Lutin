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

unsigned int Utils::split(const std::string &txt, std::vector<std::string> &strs, char ch, bool keepChar)
{
	short indexKeep = (short)keepChar;
    unsigned int pos = txt.find( ch );
    unsigned int initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != std::string::npos ) 
	{
        strs.push_back( txt.substr( initialPos, pos - initialPos + indexKeep ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, MIN( pos, txt.size() ) - initialPos + indexKeep ) );

    return strs.size();
}

unsigned int Utils::split(const std::string &txt, std::vector<std::string> &strs, std::string chars)
{
    size_t pos = 0, lastPos = 0;
    while ((pos = txt.find_first_of(chars, lastPos)) != std::string::npos)
    {
        strs.push_back(txt.substr(lastPos, pos-lastPos));
        strs.push_back(txt.substr(pos, 1));
        lastPos = pos+1;
    }
    strs.push_back(txt.substr(lastPos));
    return strs.size();
}
