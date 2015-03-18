#include <exception>

class SyntaxException: public std::exception
{
    public:
	SyntaxException(const char* msg); 
	virtual ~SyntaxException() throw();
	const char *what() const throw();
    private:
	const char* message;
};