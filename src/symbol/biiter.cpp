// ---------------------------------------------
//  biiter.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "biiter.h"

S_Biiter::S_Biiter(S_Bi* bi, S_I* i)
    : S_Bi(), bi(bi), i(i)
{
}

S_Biiter::~S_Biiter()
{
	if(bi != 0)
		delete bi;
	if(i != 0)
		delete i;
}

std::string S_Biiter::print() const
{
    return bi->print() + i->print() + ";\n";
}

void S_Biiter::optimize()
{
    std::cout << "S_Biiter::optimize()" << std::endl;
    bi->optimize();
    std::cout << "S_Biiter::optimize(): " << *i << std::endl;
    i->optimize();
    std::cout << "S_Biiter::optimize():END" << std::endl;
}

void S_Biiter::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
	this->bi->staticAnalysis(memId , log);
	this->i->staticAnalysis(memId , log);
}
