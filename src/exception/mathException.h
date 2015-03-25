#ifndef MATHEXCEPTION_H
#define MATHEXCEPTION_H

#include <exception>
#include <string>

class MathException : public std::exception
{
    public: 
		MathException(std::string msg); 
		virtual ~MathException() throw();
		const char *what() const throw();
		
		    
		static std::string DIVIDE_BY_ZERO;
		static std::string C_E_O;

    private:
		std::string message;
};

#endif
