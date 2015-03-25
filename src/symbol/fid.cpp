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
	if(id != 0)
		delete id;
}

std::string S_Fid::print() const
{
    return id->print();
}

Symbol* S_Fid::optimize()
{
    return 0;
}
