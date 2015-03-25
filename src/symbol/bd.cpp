// ---------------------------------------------
//  bd.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "bd.h"

S_Bd::S_Bd()
    : Symbol(BD)
{
}

S_Bd::~S_Bd()
{
}

std::string S_Bd::print() const
{
    return "";
}

void S_Bd::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    
}
