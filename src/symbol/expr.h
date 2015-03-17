#include "symbol.h"
#include <map>
#include <string>
using namespace std;

class Expr : public Symbol {

	public:

		//Default Constructor
		Expr();

		//Deconstructor
		virtual ~Expr() {}

		virtual double eval (const map<string,double> &vals) = 0;

	private:

		//Disable the following by Expr 

};
