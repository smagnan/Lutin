#include <exception>

class OperationException : public std::exception
{
    public: 
	OperationException(const char* msg); 
	virtual ~OperationException() throw();
	const char *what() const throw();
	
	static const char* SETCONST;
    
    private:
	const char* message;
};
