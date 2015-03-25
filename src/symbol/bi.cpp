// ---------------------------------------------
//  bi.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "bi.h"

S_Bi::S_Bi()
    : Symbol(BI)
{
}

S_Bi::~S_Bi()
{
}

std::string S_Bi::print() const
{
    return "";
}

void S_Bi::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    
}
