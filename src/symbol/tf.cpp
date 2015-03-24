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
}

std::string S_Tf::print()
{
    return f->print();
}