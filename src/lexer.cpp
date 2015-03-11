


// Constructors - destructors :
Lexer::Lexer()
{
    // All regexes are compiled in constructors
    const string regular1 = 
        // Var
        "(var\s)|"
        // Const
        "(const\s)|"
        // read 
        "(lire\s)|"
        // write
        "(ecrire\s)|"
        // Plus symbol
        "(+)|"
        // Minus symbol
        "(-)|"
        // Multiply symbol
        "(*)|"
        // Divide symbol
        "(/)|"
        // openby left
        "(\()|"
        // openby right
        "(\))|"
        // semicolon
        "(;)|"
        // Id
        "([a-zA-Z_][a-zA-Z0-9_]*)"
        // vir 
        "(,)|"
        // egal
        "(=)|"
        // affectation
        "(:=)|"
        // num 
        "(-?\d+(,\d+)?"
    ;
    
    boost::regex re1(regular1, boost::regex::extended);
}

Lexer::~Lexer()
{

}


