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
    std::cout << "S_Iaff::optimize()" << std::endl;
    eprime->optimize();
    std::cout << "S_Iaff::optimize():END" << std::endl;
}

void S_Iaff::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
	std::map< std::string, Variable >::iterator it;
	it=memId.find(id->getValue());
	
	if (it == memId.end()) 
	{
		log.push(NOT_DECLARED);
	}
	
	else if ((it->second).is_const == true)
	{
		log.push(CONST_AFFECT);
	}
	else
	{
		(it->second).is_assigned = true ;
	}
}
