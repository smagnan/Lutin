#ifndef MATHEXCEPTION_H
#define MATHEXCEPTION_H

#include <exception>
#include <string>

extern const std::string DIVIDE_BY_ZERO_ERROR;
extern const std::string CANNOT_EVALUATE_ERROR;

class MathException : public std::exception
{
    public: 
		MathException(std::string msg); 
		virtual ~MathException() throw();
		const char *what() const throw();

    private:
		std::string message;
};

#endif
