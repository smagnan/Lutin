// ---------------------------------------------
//  ilire.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "ilire.h"

S_Ilire::S_Ilire(S_Id* id)
    : S_I(), id(id)
{
}

S_Ilire::~S_Ilire()
{
	if(id != 0)
		delete id;
}

std::string S_Ilire::print() const
{
    return "lire " + id->print();
}

void S_Ilire::optimize()
{
}

void S_Ilire::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
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
}
