// ---------------------------------------------
//  tbin.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tbin.h"

S_Tbin::S_Tbin(Symbols s)
    : S_T()
{
}

S_Tbin::S_Tbin(S_T* t, S_F* f)
    : S_T(), t(t), f(f)
{
}

S_Tbin::~S_Tbin()
{
}
