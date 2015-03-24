// ---------------------------------------------
//  fid.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "fid.h"

S_Fid::S_Fid(S_Id* id)
    : S_F(), id(id)
{
}

S_Fid::~S_Fid()
{
}

std::string S_Fid::print() const
{
    return id->print();
}
