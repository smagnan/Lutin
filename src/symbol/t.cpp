// ---------------------------------------------
//  t.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "t.h"

S_T::S_T(Symbols s)
    : S_E(s)
{
    
}

S_T::S_T()
    : S_E(T)
{
}

S_T::~S_T()
{
}

std::string S_T::print() const
{
    return "";
}

void S_T::optimize(bool& is_opt, double& value, S_T** ret)
{
    (void) is_opt;
    (void) value;
    (void) ret;
}
