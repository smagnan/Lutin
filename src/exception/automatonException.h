#include <exception>
#include <string>

extern const std::string EMPTY_INPUT_ERROR;
extern const std::string EMPTY_STATE_STACK_ERROR;
extern const std::string EMPTY_SYMBOL_STACK_ERROR;
extern const std::string RULES_ERROR;

class AutomatonException : public std::exception
{
    public: 
		AutomatonException(std::string msg); 
		virtual ~AutomatonException() throw();
		const char *what() const throw();
		static std::string SETCONST;
    
    private:
		std::string message;
};
