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

void S_Tbin::optimize(bool& is_opt, double& value, S_T** ret)
{
    (void) is_opt;
    (void) value;
    (void) ret;
}

void S_Tbin::staticAnalysis(std::map< std::string, Variable > & memId)
{
    this->t->staticAnalysis(memId);
    this->f->staticAnalysis(memId);
}
