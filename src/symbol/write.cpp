// ---------------------------------------------
//  write.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "write.h"

S_Write::S_Write()
    : Symbol(WRITE)
{
}

S_Write::~S_Write()
{
}

std::string S_Write::print() const
{
    return "write";
}
