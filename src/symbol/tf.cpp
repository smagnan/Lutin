// ---------------------------------------------
//  tf.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tf.h"

S_Tf::S_Tf(S_F * f)
    : S_T(), f(f)
{
}

S_Tf::~S_Tf()
{
	if(!f)
		delete f;
}

std::string S_Tf::print() const
{
    return f->print();
}
