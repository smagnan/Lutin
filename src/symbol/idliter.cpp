// ---------------------------------------------
//  idliter.cpp
//
//  Created  :
//      by   : Pierre GODARD
//
// ---------------------------------------------

#include "idliter.h"

S_Idliter::S_Idliter(S_Idl* idl, S_Id* id)
    : S_Idl(), idl(idl), id(id)
{
}

S_Idliter::~S_Idliter()
{
    if(idl != 0)
        delete idl;
    if(id != 0)
        delete id;
}

std::string S_Idliter::print() const
{
    return idl->print() + ", " + id->print();
}

void S_Idliter::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
    this->idl->staticAnalysis(memId , log);
    
    Variable var_info;
    var_info.is_const = false;
    var_info.is_declared = true; // Just a declaration
    var_info.is_assigned = false;
    var_info.is_used = false;
    
    // If the id is already in the map : double declaration
    if (!(memId.insert( std::pair< std::string, Variable >(id->getValue(),var_info))).second)
    {
        std::cerr << ALREADY_DECLARED << *id << std::endl;
    }
}
