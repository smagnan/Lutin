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
}
