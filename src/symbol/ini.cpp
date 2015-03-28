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

void S_Ini::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
	Variable idDeclared;
	idDeclared.is_declared = true;
	if ((memId.insert( std::pair< std::string, Variable >(id->getValue(),idDeclared))).second == false)
	{
		log.push(ALREADY_DECLARED);
	}
}