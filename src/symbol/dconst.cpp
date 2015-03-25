// ---------------------------------------------
//  dconst.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "dconst.h"

S_Dconst::S_Dconst(S_Ini* ini, S_Inil* inil)
    : S_D(), ini(ini), inil(inil)
{
}

S_Dconst::~S_Dconst()
{
}

std::string S_Dconst::print() const
{
    return "const " + ini->print() + inil->print();
}
