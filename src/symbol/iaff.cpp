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

void S_Iaff::staticAnalysis(std::map< std::string, Variable > & memId)
{
	std::map< std::string, Variable >::iterator it = memId.find(id->getValue());

	if (it == memId.end())
	{
        std::cerr << NOT_DECLARED << *id << std::endl;
	}
	else if ((it->second).is_const)
	{
        std::cerr << CONST_AFFECT << *id << std::endl;
		(it->second).is_used = true;
	}
	else
	{
		(it->second).is_assigned = true ;
		(it->second).is_used = true;
	}
    
	this->eprime->staticAnalysis(memId);
}
