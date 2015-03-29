// ---------------------------------------------
//  p.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "p.h"

S_P::S_P(S_Bd* bd,S_Bi* bi)
    : Symbol(P), bd(bd), bi(bi)
{
}

S_P::~S_P()
{
	if(!bd)
		delete bd;
	if(!bi)
		delete bi;
}

std::string S_P::print() const
{
    return bd->print() + "\n" + bi->print();
}

void S_P::optimize()
{
    std::cout << "S_P::optimize()" << std::endl;
    bi->optimize();
    std::cout << "S_P::optimize():END" << std::endl;
}

void S_P::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->bd->staticAnalysis(memId ,log);
	this->bi->staticAnalysis(memId ,log);
}
