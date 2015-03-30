// ---------------------------------------------
//  e.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "e.h"

S_E::S_E(Symbols s)
    : Symbol(s)
{
    
}

S_E::S_E()
    : Symbol(E)
{
}

S_E::~S_E()
{
}

std::string S_E::print() const
{
    return "";
}

void S_E::optimize(bool& is_opt, double& value, S_E** ret)
{
    std::cout << value << " | " << is_opt << " | S_E " << *this << " | " << ret << std::endl;
}
