using namespace std;


// Constructors - destructors :
Lexer::Lexer()
{
    const char* re = 
        // Var
        "(var\s)"
        // Const
        "(const\s)"
        // read 
        "(lire\s)"
        // write
        "(ecrire\s)"
        // Plus symbol
        "(+)"
        // Minus symbol
        "(-)"
        // Multiply symbol
        "(*)"
        // Divide symbol
        "(/)"
        // openby left
        "(\()"
        // openby right
        "(\))"
        // semicolon
        "(;)"
        // Id
        "([a-zA-Z_][a-zA-Z0-9_]*)"
        // vir 
        "(,)"
        // egal
        "(=)"
        // affectation
        "(:=)"
        // num 
        "(-?\d+(,\d+)?";
    
    boost::regex main_regex(re);
}

private bool regex_callback(const boost::match_results<std::string::const_iterator>& str_found)
{

    return true;
}


Lexer::~Lexer()
{

}


