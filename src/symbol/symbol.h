//filecomment

class Symbol
{

	public:

		//Default Constructor
		Symbol(int id) : ident(id) {}

		//Deconstructor
		virtual ~Symbol() {};

		void print();

		// overload int() to cast symbol into integer
		operator int() const {return ident;}

	protected:
		int ident;

	private:

		//Disable the following by Symbol 

};
