// ---------------------------------------------
//  ebin.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "ebin.h"

S_Ebin::S_Ebin()
    : S_E()
{
}

S_Ebin::S_Ebin(S_E* e, S_T* t)
    : S_E(), e(e), t(t)
{
}

S_Ebin::~S_Ebin()
{
}
