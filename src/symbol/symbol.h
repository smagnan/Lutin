const int EXPR = 1000;

class Symbol
{

	public:

		//Default Constructor
		Symbol(int id);

		//Deconstructor
		virtual ~Symbol();

		void print();

		// overload int() to cast symbol into integer
		operator int() const;

	protected:
		int ident;

	private:

		//Disable the following by Symbol 

};
