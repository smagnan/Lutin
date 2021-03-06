// ---------------------------------------------
//  ebin.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "ebin.h"

S_Ebin::S_Ebin()
    : S_E()
{
}

S_Ebin::S_Ebin(S_E* e, S_T* t)
    : S_E(), e(e), t(t)
{
}

S_Ebin::~S_Ebin()
{
	if(e != 0)
		delete e;
	if(t != 0)
		delete t;
}

std::string S_Ebin::print() const
{
    return "";
}

void S_Ebin::optimize(bool& is_opt, double& value, S_E** ret)
{
}

void S_Ebin::staticAnalysis(std::map< std::string, Variable > & memId)
{
    this->e->staticAnalysis(memId);
	this->t->staticAnalysis(memId);
}
