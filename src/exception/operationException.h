#include <exception>
#include <string>

class OperationException : public std::exception
{
    public: 
	OperationException(std::string msg); 
	virtual ~OperationException() throw();
	const char *what() const throw();
	
	static std::string SETCONST;
    
    private:
	std::string message;
};
