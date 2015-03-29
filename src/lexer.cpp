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
        "(\\s*[a-zA-Z][a-zA-Z0-9_]*\\s*)|"
        // vir 
        "\\s*(,)\\s*|"
        // egal
        "\\s*(=)\\s*|"
        // affectation
        "\\s*(:=)\\s*|"
        // num 
        "([0-9]*\\.[0-9]+|[0-9]+)|"
        // everything else (matching error)
        "(.*)";
    
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
        
        /*
        // let's see what's inside the prog :
        for(std::vector<std::string>::iterator i = progLines.begin(); i != progLines.end(); i++)
        {
            std::cout << *i << std::endl;
        }
        */

        // remove empty lines :
        std::vector<std::string>::iterator j = progLines.begin();
        while(j != progLines.end())
        {
            if ((*j).empty())
                j = progLines.erase(j);
            else
                ++j;
        }

        /*
        // let's see what's inside the prog :
        int c = 1;
        for(std::vector<std::string>::iterator i = progLines.begin(); i != progLines.end(); i++)
        {
            std::cout << "Line :" << c++ << " : " << *i << std::endl;
        }
        */

        // set iterators to on newly filled vector
        progStart = progLines.begin();
        TRACE("progStart points to : " << *progStart << std::endl)
        progEnd = progLines.end()-1;       
        TRACE("progEnd points to : " << *progEnd << std::endl)
        DEBUGINFO("Lexer::Program Set");
        return true;
    }
    return false;
}


std::pair<std::vector<Symbol*>, matchError_vector> Lexer::getSymbols()
{
    std::vector<Symbol*> lineSymbols; 

    DEBUGINFO("Lexer::Start of getSymbols");
    // clear error vector
    if (!matchErr.empty())
        matchErr.clear();

    // clear patterns vector for new set of calls to regex_callback
    patterns.clear();

    // Find symbols
    std::cout << "Start of line : " << *((*progStart).begin()) << std::endl;
    std::cout << "End of line : " << *((*progStart).end()-1) << std::endl;
    boost::sregex_iterator m1((*progStart).begin(), (*progStart).end(), main_regex);
    boost::sregex_iterator m2;
    while(m1 != m2)
    {
        std::cout << "Regex call back with " << *m1 << std::endl;
        regex_callback(*m1);
        ++m1;
    }

    DEBUGINFO("Lexer::getSymbols() will return symbols from :");
    TRACE((*progStart) << std::endl)

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
                std::cout << "Found var" << std::endl;
                break;
            case 2 :     // const
                lineSymbols.push_back((Symbol*)(new S_Const()));
                std::cout << "Found const" << std::endl;
                break;
            case 3 :     // lire
                lineSymbols.push_back((Symbol*)(new S_Read()));
                std::cout << "Found lire" << std::endl;
                break;  
            case 4:     // ecrire
                lineSymbols.push_back((Symbol*)(new S_Write()));
                std::cout << "Found ecrire" << std::endl;
                break;
            case 5:     // +
                lineSymbols.push_back((Symbol*)(new S_Plus()));
                std::cout << "Found +" << std::endl;
                break;
            case 6:     // -
                lineSymbols.push_back((Symbol*)(new S_Minus()));
                std::cout << "Found -" << std::endl;
                break;
            case 7:     // *
                lineSymbols.push_back((Symbol*)(new S_Mult()));
                std::cout << "Found *" << std::endl;
                break;
            case 8:     // /
                lineSymbols.push_back((Symbol*)(new S_Divide()));
                std::cout << "Found /" << std::endl;
                break;
            case 9:     // (
                lineSymbols.push_back((Symbol*)(new S_Openby()));
                std::cout << "Found (" << std::endl;
                break;
            case 10:    // )
                lineSymbols.push_back((Symbol*)(new S_Closeby()));
                std::cout << "Found )" << std::endl;
                break;
            case 11:    // ;
                lineSymbols.push_back((Symbol*)(new S_Pv()));
                std::cout << "Found ;" << std::endl;
                break;
            case 12:    // id (any a-ZA-Z / 0-9 charac)
                lineSymbols.push_back((Symbol*)(new S_Id(b->second)));
                std::cout << "Found id" << std::endl;
                break;  
            case 13:    // ,
                lineSymbols.push_back((Symbol*)(new S_Vir()));
                std::cout << "Found ," << std::endl;
                break;
            case 14:    // =
                lineSymbols.push_back((Symbol*)(new S_Eq()));
                std::cout << "Found =" << std::endl;
                break;
            case 15:    // :=
                lineSymbols.push_back((Symbol*)(new S_Aff()));
                std::cout << "Found :=" << std::endl;
                break;
            case 16:    // number
                lineSymbols.push_back((Symbol*)(new S_Num(Utils::stringToDouble(b->second))));
                std::cout << "Found number" << std::endl;
                break;
            default:
                std::cout << "Found nothing" << std::endl;
                break;
        }
        ++b;
    } 
    DEBUGINFO("Lexer::End of getSymbols()");
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
    DEBUGINFO("Lexer::Call to hasNext()");
    if (progStart != progEnd+1) // if progStart != progEnd, we stop one line before the end.
    {
        DEBUGINFO("Lexer::hasNext() - more lines to compute");
        return true;
    }
    else
    {  
        DEBUGINFO("Lexer::hasNext() - no other line to compute");
        return false;
    }
}


//-------------------------------------------------- Private Methods 

bool Lexer::regex_callback(const boost::match_results<std::string::const_iterator>& str_found)
{
    // loop on all 17 symbols 
    for(int i = 1; i <= 17; i++)
    {
        std::cout << "For loop 1 : i = " << i << std::endl;
        // If one of the parenthesis match (and no more than  one will match) :
        if (str_found.position(i) != -1) 
        { // symbol matched ? 
            std::cout << "If : i = " << i << " and str_found.position(i) = " << str_found.position(i) << std::endl;
            if (i != 17) 
            {   // a pattern was matched.
                std::cout << "Symbol n " << i << " matched : " << str_found[i] << std::endl;
                patterns.push_back(make_pair(i, str_found[i].str()));
                return true;
            }
            else 
            {   // something that was not a pattern was matched
                matchErr.push_back(matchError());
                matchErr.back().position = str_found.position(i);
                matchErr.back().length = str_found.length(i);
                matchErr.back().str = str_found[i];
                std::cout << "MatchErr : " << str_found[i] << std::endl;
                return false;
            }
        }
    }
    return false;
}

