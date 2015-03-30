// ---------------------------------------------
//  ilire.cpp
//
//  Created  :
//      by   : Pierre GODARD
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

void S_Ilire::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
    std::map< std::string, Variable >::iterator it = memId.find(id->getValue());
    
    // Trying to read a non declared variable
    if (it == memId.end())
    {
        std::cerr << NOT_DECLARED << *id << std::endl;
    }
    // Normal case
    else
    {
        (it->second).is_used = true ;
    }
}
