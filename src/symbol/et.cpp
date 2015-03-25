// ---------------------------------------------
//  et.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "et.h"

S_Et::S_Et(S_T* t)
    : S_E(), t(t)
{
}

S_Et::~S_Et()
{
	if(t != 0)
		delete t;
}

std::string S_Et::print() const
{
    return t->print();
}

double S_Et::eval(Interpreter& interpreter)
{
    return t->eval(interpreter);
}
