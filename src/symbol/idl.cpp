// ---------------------------------------------
//  idl.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "idl.h"

S_Idl::S_Idl()
    : Symbol(IDL)
{
}

S_Idl::~S_Idl()
{
}

std::string S_Idl::print() const
{
    return "";
}

void S_Idl::staticAnalysis(std::map< std::string, Variable > & memId)
{

}
