// ---------------------------------------------
//  inil.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "inil.h"

S_Inil::S_Inil()
    : Symbol(INIL)
{
}

S_Inil::~S_Inil()
{
}

std::string S_Inil::print() const
{
    return "";
}

void S_Inil::staticAnalysis(std::map<std::string,Variable>& memId, std::vector<std::string>& log)
{

}
