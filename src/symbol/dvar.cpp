// ---------------------------------------------
//  dvar.cpp
//
//  Created  :
//      by   : Pierre GODARD
//
// ---------------------------------------------

#include "dvar.h"

S_Dvar::S_Dvar(S_Id* id, S_Idl* idl)
    : S_D(), id(id), idl(idl)
{
}

S_Dvar::~S_Dvar()
{
    if(id != 0)
        delete id;
    if(idl != 0)
        delete idl;
}

std::string S_Dvar::print() const
{
    return "var " + id->print() + idl->print();
}

void S_Dvar::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
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
        log.push_back(ALREADY_DECLARED + id->getValue());
    }
}
