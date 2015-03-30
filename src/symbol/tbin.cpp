// ---------------------------------------------
//  tbin.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tbin.h"

S_Tbin::S_Tbin(S_T* t, S_F* f)
    : S_T(), t(t), f(f)
{
}

S_Tbin::~S_Tbin()
{
	if(!t)
		delete t;
	if(!f)
		delete f;
}

std::string S_Tbin::print() const
{
    return "";
}

void S_Tbin::optimize(bool& is_opt, double& value)
{
}

void S_Tbin::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
    this->t->staticAnalysis(memId ,log);
	this->f->staticAnalysis(memId ,log);
}
