#ifndef LEXER_H
#define LEXER_H



// Includes Systeme
#include <boost/regex.hpp>
#include <string>

// Include Perso
#include "aff.h"
#include "closeby.h"
#include "const.h"
#include "divide.h"
#include "eg.h"
#include "exprbin.h"
#include "exprdivide.h"
#include "expr.h"
#include "exprminus.h"
#include "exprmult.h"
#include "exprplus.h"
#include "minus.h"
#include "mult.h"
#include "num.h"
#include "openby.h"
#include "plus.h"
#include "pv.h"
#include "read.h"
#include "symbol.h"
#include "var.h"
#include "write.h"

class Lexer 
{
public:
    bool setProg(String prog);
    vector<Symbol> getSymbols();
    bool hasNext();
private:
    bool regex_callback(const boost::match_results<std::string::const_iterator>& str_found)
}
