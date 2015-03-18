// ---------------------------------------------
//  id.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "id.h"

S_Id::S_Id(Symbols s)
    : S_Expr(s)
{
}

S_Id::S_Id()
    : S_Expr(ID)
{
}

S_Id::~S_Id()
{
}
