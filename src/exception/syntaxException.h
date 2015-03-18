#include <exception>
#include <string>

class SyntaxException: public std::exception
{
    public:
	SyntaxException(std::string msg); 
	virtual ~SyntaxException() throw();
	const char *what() const throw();
    private:
	std::string message;
};
