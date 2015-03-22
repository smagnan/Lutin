#ifndef LEXER_H
#define LEXER_H

// Includes Systeme
#include <boost/regex.hpp>
#include <string>
#include <vector>

// Include Perso
#include "symbol/symbol.h"
#include "symbol/aff.h"
#include "symbol/closeby.h"
#include "symbol/const.h"
#include "symbol/divide.h"
#include "symbol/eq.h"
#include "symbol/minus.h"
#include "symbol/mult.h"
#include "symbol/num.h"
#include "symbol/openby.h"
#include "symbol/plus.h"
#include "symbol/pv.h"
#include "symbol/read.h"
#include "symbol/var.h"
#include "symbol/id.h"
#include "symbol/vir.h"
#include "symbol/write.h"
#include "utils.h"

// Structure for matching error :
struct matchError {
    unsigned short position;
    unsigned short length;
    std::string str;
};

// Vector used for matched symbols :
// - first in pair refers to position of pattern matched in regex
// - second in pair is the content matched
typedef std::vector<std::pair<int,std::string> > pattern_vector;

// Vector for matching error :
typedef std::vector<matchError> matchError_vector;


class Lexer 
{

public:
    Lexer();
    virtual ~Lexer();
    bool setProg(std::string prog);
    std::pair<std::vector<Symbol*>, matchError_vector > getSymbols();
    bool hasNext();
private:
    // Will contains lines of program :
    std::vector<std::string> progLines;                       // contains all lines of parsed program
    std::vector<std::string>::iterator progStart, progEnd;    // iterator on the vector of lines
    std::vector<Symbol*> lineSymbols;                         // temp vector of matched symbols
    // Compile Regex:
    boost::regex main_regex;
    // Will contain matched symbols : 
    pattern_vector patterns;
    // Will contain matching errors :
    matchError_vector matchErr; 

    bool regex_callback(const boost::match_results<std::string::const_iterator>& str_found);

};

#endif // LEXER_H

