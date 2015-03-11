//filecomment

class Expr : public Symbol
{

	public:

		//Default Constructor
		Expr() : Symbole(EXPR){}

		//Deconstructor
		virtual ~Expr() {}
		virtual double eval (const map<string,double> &vals) = 0;

	private:

		//Disable the following by Expr 

};
