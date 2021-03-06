/*#######################################################################
#   Class : LEXER                                                       #
#   Created :                                                           #
#                                                                       #
########################################################################*/

#include "lexer.h"
#include "debugger.h"
#include <iostream>
#include "symbol/end.h"

//-------------------------------------- Constructors - destructors :
Lexer::Lexer()
{
    // Regex patterns
    const char* regex = 
        // Var
        "(^var\\s+)|"
        // Const
        "(^const\\s+)|"
        // read 
        "(^lire\\s+)|"
        // write
        "(^ecrire\\s+)|"
        // Plus symbol
        "\\s*(\\+)\\s*|"
        // Minus symbol
        "\\s*(-)\\s*|"
        // Multiply symbol
        "\\s*(\\*)\\s*|"
        // Divide symbol
        "\\s*(/)\\s*|"
        // openby left
        "\\s*(\\()\\s*|"
        // openby right
        "\\s*(\\))\\s*|"
        // semicolon
        "\\s*(;)\\s*$|"
        // id
        "\\s*([a-zA-Z][a-zA-Z0-9_]*)\\s*|"
        // vir 
        "\\s*(,)\\s*|"
        // egal
        "\\s*(=)\\s*|"
        // affectation
        "\\s*(:=)\\s*|"
        // num 
        "([0-9]*\\.[0-9]+|[0-9]+)|"
        // everything else (matching error)
        "(.)";
    
    // Compile Regex:
    main_regex.assign(regex);
    DEBUGINFO("Lexer::Regex ready for use");
}

Lexer::~Lexer()
{
}

//-------------------------------------------------- Public Methods

// Set program to be analyzed by regex
bool Lexer::setProg(std::string prog)
{
    if (prog.size() != 0)
    {
        // split program in lines
        std::stringstream ss(prog);
        std::string line;
        while (std::getline(ss, line, '\n'))
        {
            progLines.push_back(line);   
        }
        
        // remove empty lines :
        std::vector<std::string>::iterator j = progLines.begin();
        while(j != progLines.end())
        {
            if ((*j).empty())
                j = progLines.erase(j);
            else
                ++j;
        }

        // set iterators to on newly filled vector
        progStart = progLines.begin();
        progEnd = progLines.end()-1;       
        return true;
    }
    return false;
}


std::pair<std::vector<Symbol*>, matchError_vector> Lexer::getSymbols()
{
    std::vector<Symbol*> lineSymbols; 

    // clear error vector
    if (!matchErr.empty())
        matchErr.clear();

    // clear patterns vector for new set of calls to regex_callback
    patterns.clear();

    // Find symbols
    boost::sregex_iterator m1((*progStart).begin(), (*progStart).end(), main_regex);
    boost::sregex_iterator m2;
    while(m1 != m2)
    {
        regex_callback(*m1);
        ++m1;
    }

    // increment iterator (for next loop)
    progStart++;
    // Fill symbol vector
    pattern_vector::iterator b,e;
    b = patterns.begin();
    
    e = patterns.end();
    while(b != e)
    {
        switch (b->first)
        {
            case 1 :     // var 
                lineSymbols.push_back((Symbol*)(new S_Var()));
                break;
            case 2 :     // const
                lineSymbols.push_back((Symbol*)(new S_Const()));
                break;
            case 3 :     // lire
                lineSymbols.push_back((Symbol*)(new S_Read()));
                break;  
            case 4:     // ecrire
                lineSymbols.push_back((Symbol*)(new S_Write()));
                break;
            case 5:     // +
                lineSymbols.push_back((Symbol*)(new S_Plus()));
                break;
            case 6:     // -
                lineSymbols.push_back((Symbol*)(new S_Minus()));
                break;
            case 7:     // *
                lineSymbols.push_back((Symbol*)(new S_Mult()));
                break;
            case 8:     // /
                lineSymbols.push_back((Symbol*)(new S_Divide()));
                break;
            case 9:     // (
                lineSymbols.push_back((Symbol*)(new S_Openby()));
                break;
            case 10:    // )
                lineSymbols.push_back((Symbol*)(new S_Closeby()));
                break;
            case 11:    // ;
                lineSymbols.push_back((Symbol*)(new S_Pv()));
                break;
            case 12:    // id (any a-ZA-Z / 0-9 charac)
                lineSymbols.push_back((Symbol*)(new S_Id(b->second)));
                break;  
            case 13:    // ,
                lineSymbols.push_back((Symbol*)(new S_Vir()));
                break;
            case 14:    // =
                lineSymbols.push_back((Symbol*)(new S_Eq()));
                break;
            case 15:    // :=
                lineSymbols.push_back((Symbol*)(new S_Aff()));
                break;
            case 16:    // number
                lineSymbols.push_back((Symbol*)(new S_Num(Utils::stringToDouble(b->second))));
                break;
            default:
                break;
        }
        ++b;
    } 
    return make_pair(lineSymbols, matchErr); 
}

std::deque<Symbol*> Lexer::getDeque()
{
    std::deque<Symbol*> symDeque;
    while (this->hasNext())
    {
        std::vector<Symbol*> symVect = this->getSymbols().first;
        for(std::vector<Symbol*>::iterator it = symVect.begin(); it != symVect.end(); it++)
        {
            symDeque.push_back(*it);
        }
    }
    symDeque.push_back(new S_End());
    return symDeque;
}






bool Lexer::hasNext()
{
	return (progStart != progEnd+1); // if progStart != progEnd, we stop one line before the end.
}


//-------------------------------------------------- Private Methods 

void Lexer::regex_callback(const boost::match_results<std::string::const_iterator>& str_found)
{
    // loop on all 17 symbols 
    for(int i = 1; i <= 17; i++)
    {
        // If one of the parenthesis match (and no more than  one will match) :
        if (str_found.position(i) != -1) 
        { // symbol matched ? 
            if (i != 17) 
            {   // a pattern was matched.
                patterns.push_back(make_pair(i, str_found[i].str()));
            }
            else 
            {   // something that was not a pattern was matched
                std::cout << "Forbidden symbol " << str_found[i] << std::endl;
            }
        }
    }
}

