// ---------------------------------------------
//  dvar.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "dvar.h"

S_Dvar::S_Dvar(S_Id* id, S_Idl* idl)
    : S_D(), id(id), idl(idl)
{
}

S_Dvar::~S_Dvar()
{
	if(id != 0)
		delete id;
	if(idl != 0)
		delete idl;
}

std::string S_Dvar::print() const
{
    return "var " + id->print() + idl->print();
}

void S_Dvar::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
	this->idl->staticAnalysis(memId , log);

	Variable idDeclared;
	idDeclared.is_declared = true;
	idDeclared.is_const = false;
	if ((memId.insert( std::pair< std::string, Variable >(id->getValue(),idDeclared))).second == false)
	{
		log.push_back(ALREADY_DECLARED + id->getValue());
	}
}
