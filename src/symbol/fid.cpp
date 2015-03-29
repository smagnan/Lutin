// ---------------------------------------------
//  fid.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "fid.h"

S_Fid::S_Fid(S_Id* id)
    : S_F(), id(id)
{
}

S_Fid::~S_Fid()
{
	if(id != 0)
		delete id;
}

std::string S_Fid::print() const
{
    return id->print();
}

void S_Fid::optimize(bool& is_opt, double& value)
{
    is_opt = false;
    value = 0;
}

double S_Fid::eval(Interpreter& interpreter)
{
    return id->eval(interpreter);
}

double S_Fid::eval()
{
    return id->eval();
}

void S_Fid::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
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
