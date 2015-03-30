// ---------------------------------------------
//  f.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "f.h"

S_F::S_F(Symbols s)
    : S_T(s)
{

}

S_F::S_F()
    : S_T(F)
{
}

S_F::~S_F()
{
}

std::string S_F::print() const
{
    return "";
}

void S_F::optimize(bool& is_opt, double& value)
{
}

void S_F::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{

}
