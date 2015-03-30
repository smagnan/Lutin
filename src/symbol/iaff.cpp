// ---------------------------------------------
//  iaff.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "iaff.h"

S_Iaff::S_Iaff(S_Id * id, S_Eprime* eprime)
    : S_I(), id(id), eprime(eprime)
{
}

S_Iaff::~S_Iaff()
{
	if(id != 0)
		delete id;
	if(eprime != 0)
		delete eprime;
}

std::string S_Iaff::print() const
{
    return id->print() + " := " + eprime->print();
}

void S_Iaff::optimize()
{
    eprime->optimize();
}

void S_Iaff::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
	std::map< std::string, Variable >::iterator it = memId.find(id->getValue());

	if (it == memId.end())
	{
		log.push_back(NOT_DECLARED + id->getValue());
	}
	else if ((it->second).is_const)
	{
		log.push_back(CONST_AFFECT + id->getValue());
		(it->second).is_used = true;
	}
	else
	{
		(it->second).is_assigned = true ;
		(it->second).is_used = true;
	}
}
