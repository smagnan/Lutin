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
        "(\\*)|"
        // Divide symbol
        "(/)|"
        // openby left
        "(\\()|"
        // openby right
        "(\\))|"
        // semicolon
       "(\\s?;$)|"
        // Id
        "([a-zA-Z][a-zA-Z0-9_]*)|"
        // vir 
        "(\\s?,\\s?)|"
        // egal
        "(\\s?=\\s?)|"
        // affectation
        "(\\s?:=\\s?)|"
        // num 
        "(-?\\d+(,\\d+)?)";
    
    // Compile Regex:
    boost::regex main_regex(re);
    // Will contain matched symbols : 
    symbol_vector symbols;
    // Will contains lines of program :
    vector<String> progLines;
    vector<String>::iterator progStart, progEnd;
}

Lexer::~Lexer()
{

}

//-------------------------------------------------- Public Methods
bool Lexer::setProg(String prog)
{
    if (prog != null)
    {
        std::stringstream ss(prog);
        std::string line;
        while (std::getline(ss, line, '\n'))
        {
            progLines.push_back(line);   
        }
        progStart = progLines.begin();
        progEnd = progLines.end();
        return true;    
    }
    return false;
}


vector<Symbol> Lexer::getSymbols()
{
    vector<Symbol> ret; // what will be returned
 
    boost::sregex_iterator m1((*progStart).begin(), (*progStart).end(), expression);
    boost::sregex_iterator m2;
    std::for_each(m1, m2, &regex_callback);
    progStart++;
    
    symbol_vector::iterator b,e;
    b = symbols.begin();
    e = symbols.end();
    while(b != e)
    {
        switch ( (*b).first ) :
        {
            case 1:     // var
                ret.push_back(new Var());
                break;
            case 2:     // const
                ret.push_back(new Const());
                break;
            case 3:     // lire
                ret.push_back(new Lire());
                break;  
            case 4:     // ecrire
                ret.push_back(new Ecrire());
                break;
            case 5:     // +
                ret.push_back(new Plus());
                break;
            case 6:     // -
                ret.push_back(new Minus());
                break;
            case 7:     // *
                ret.push_back(new Mult());
                break;
            case 8:     // /
                ret.push_back(new Divide());
                break;
            case 9:     // (
                ret.push_back(new Openby());
                break;
            case 10:    // )
                ret.push_back(new Closeby());
                break;
            case 11:    // ;
                ret.push_back(new Pv());
                break;
            case 12:    // id (any a-ZA-Z / 0-9 charac)
                ret.push_back(new Id());
                break;  
            case 13:    // ,
                ret.push_back(new Vir());
                break;
            case 14:    // =
                ret.push_back(new Eq());
                break;
            case 15:    // :=
                ret.push_back(new Aff());
                break;
            case 16:    // number
                ret.push_back(new Num());
                break;
            default:
                break;
        }
    }
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
