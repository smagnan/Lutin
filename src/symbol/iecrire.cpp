// ---------------------------------------------
//  iecrire.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "iecrire.h"

S_Iecrire::S_Iecrire(S_Eprime* eprime)
    : S_I(), eprime(eprime)
{
}

S_Iecrire::~S_Iecrire()
{
	if(eprime != 0)
		delete eprime;
}

std::string S_Iecrire::print() const
{
    return "ecrire " + eprime->print();
}

void S_Iecrire::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    /*
	std::map< std::string, Variable >::iterator it;
	it=memId.find(id->getValue());
	if (it == memId.end()) 
	{
		log.push(NOT_DECLARED);
	}
	else if ( (it->second).is_assigned = false)
	{
		log.push(NOT_ASSIGNED);
	}
	else
	{
		(it->second).is_used = true ;
	}
    */
}
