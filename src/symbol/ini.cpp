// ---------------------------------------------
//  ini.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "ini.h"

S_Ini::S_Ini(S_Id* id, S_Num* num)
    : Symbol(INI), id(id), num(num)
{
}

S_Ini::~S_Ini()
{
	if(!id)
		delete id;
	if(!num)
		delete num;
}

std::string S_Ini::print() const
{
    return id->print() + " = " + num->print();
}
