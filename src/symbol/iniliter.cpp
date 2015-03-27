// ---------------------------------------------
//  iniliter.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "iniliter.h"

S_Iniliter::S_Iniliter(S_Inil* inil, S_Ini* ini)
    : S_Inil(), inil(inil), ini(ini)
{
}

S_Iniliter::~S_Iniliter()
{
	if(!inil)
		delete inil;
	if(!ini)
		delete ini;
}

std::string S_Iniliter::print() const
{
    return inil->print() + ", " + ini->print();
}

void S_Iniliter::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->inil->staticAnalysis(memId ,log);
	this->ini->staticAnalysis(memId ,log);
}
