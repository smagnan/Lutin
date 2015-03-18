#include "lexer.h"

using namespace std;


// Vector used for matched symbols :
// - first in pair refers to position of pattern matched in regex
// - second in pair is the content matched
typedef std::vector<std::pair<int,std::string> > symbol_vector;


//-------------------------------------- Constructors - destructors :

Lexer::Lexer()
{
    // Regex patterns
    const char* regex = 
        // Var
        "(^var\\s)|"
        // Const
        "(^const\\s)|"
        // read 
        "(^lire\\s)|"
        // write
        "(^ecrire\\s)|"
        // Plus symbol
        "(\\s?\\+\\s?)|"
        // Minus symbol
        "(\\s?-\\s?)|"
        // Multiply symbol
        "(\\s?\\*\\s?)|"
        // Divide symbol
        "(\\s?/\\s?)|"
        // openby left
        "(\\s?\\(\\s?)|"
        // openby right
        "(\\s?\\)\\s?)|"
        // semicolon
       "(\\s?;\\s?$)|"
        // Id
        "(\\s?[a-zA-Z][a-zA-Z0-9_]*\\s?)|"
        // vir 
        "(\\s?,\\s?)|"
        // egal
        "(\\s?=\\s?)|"
        // affectation
        "(\\s?:=\\s?)|"
        // num 
        "(-?\\d+(.\\d+)?)";
    
    // Compile Regex:
    boost::regex main_regex(re);
    // Will contain matched symbols : 
    symbol_vector symbols;
    // Will contains lines of program :
    vector<String> progLines;                       // contains all lines of parsed program
    vector<String>::iterator progStart, progEnd;    // iterator on the vector of lines
    vector<Symbol> lineSymbols;                     // temp vector of matched symbols
}

virtual Lexer::~Lexer()
{
    if (!lineSymbols.empty())
    {
        vector<Symbol>::iterator i;
        while (i != lineSymbol.end())
        {
            delete (*i++);
        }
        lineSymbols.erase();
    }
}

//-------------------------------------------------- Public Methods

// Set program to be analyzed by regex
bool Lexer::setProg(String prog)
{
    if (prog != null)
    {
        // split program in lines
        std::stringstream ss(prog);
        std::string line;
        while (std::getline(ss, line, '\n'))
        {
            progLines.push_back(line);   
        }
        // set iterators to on newly filled vector
        progStart = progLines.begin();
        progEnd = progLines.end();
        return true;    
    }
    return false;
}


vector<Symbol> Lexer::getSymbols()
{
    // If lineSymbols not empty, delete everything inside
    // and emtpy it
    if (!lineSymbols.empty())
    {
        vector<Symbol>::iterator i;
        while (i != lineSymbol.end())
        {
            delete (*i);
            ++i;
        }
        lineSymbols.erase();
    }

    // Find symbols
    boost::sregex_iterator m1((*progStart).begin(), (*progStart).end(), main_regex);
    boost::sregex_iterator m2;
    std::for_each(m1, m2, &regex_callback);
    // increment iterator (for next loop)
    progStart++;
    
    // Fill symbol vector
    symbol_vector::iterator b,e;
    b = symbols.begin();
    e = symbols.end();
    while(b != e)
    {
        switch ( (*b).first ) :
        {
            case 1:     // var
                lineSymbols.push_back(new Var());
                break;
            case 2:     // const
                lineSymbols.push_back(new Const());
                break;
            case 3:     // lire
                lineSymbols.push_back(new Lire());
                break;  
            case 4:     // ecrire
                lineSymbols.push_back(new Ecrire());
                break;
            case 5:     // +
                lineSymbols.push_back(new Plus());
                break;
            case 6:     // -
                lineSymbols.push_back(new Minus());
                break;
            case 7:     // *
                lineSymbols.push_back(new Mult());
                break;
            case 8:     // /
                lineSymbols.push_back(new Divide());
                break;
            case 9:     // (
                lineSymbols.push_back(new Openby());
                break;
            case 10:    // )
                lineSymbols.push_back(new Closeby());
                break;
            case 11:    // ;
                lineSymbols.push_back(new Pv());
                break;
            case 12:    // id (any a-ZA-Z / 0-9 charac)
                lineSymbols.push_back(new Id((*b).second));
                break;  
            case 13:    // ,
                lineSymbols.push_back(new Vir());
                break;
            case 14:    // =
                lineSymbols.push_back(new Eq());
                break;
            case 15:    // :=
                lineSymbols.push_back(new Aff());
                break;
            case 16:    // number
                lineSymbols.push_back(new Num(std::stod ((*b).second)));
                break;
            default:
                break;
        }
    }
    return ret; 
}

bool Lexer::hasNext()
{
    return progStart != progEnd;
}


//-------------------------------------------------- Private Methods 

bool Lexer::regex_callback(const boost::match_results<std::string::const_iterator>& str_found)
{
    // loop on all 16 symbols 
    for(int i = 1; i <= 16; i++)
    {
        if (what.position(i) != -1) // symbol matched ? 
        {
            symbols.push_back(make_pair(i, what[i].str()));
             // cout << "Pattern n° " << i << " matched. Value : " << what[i] << endl;
        }
    }
    return true;
}
