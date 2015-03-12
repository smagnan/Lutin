#ifndef ARGS_MANAGER_H
#define ARGS_MANAGER_H

#include <string>
#include <map>
#include <boost/program_options.hpp>

#define OPTION_ANALYZE_LABEL "analyze,a"
#define OPTION_EXECUTE_LABEL "execute,e"
#define OPTION_FILE_LABEL "file"
#define OPTION_HELP_LABEL "help,h"
#define OPTION_OPTIMIZE_LABEL "optimize,o"
#define OPTION_PRINT_LABEL "print,p"

#define OPTION_ANALYZE_MESSAGE "Static analysis of the program"
#define OPTION_EXECUTE_MESSAGE "Execute the program"
#define OPTION_FILE_MESSAGE "Lutin input file path"
#define OPTION_HELP_MESSAGE "Display the help message"
#define OPTION_OPTIMIZE_MESSAGE "Simplify and transform the program"
#define OPTION_PRINT_MESSAGE "Display the code program on the standard output"

#define OPTION_ERROR_MESSAGE "Error"
#define OPTION_ERROR_MESSAGE_SEP " : "


namespace po = boost::program_options;

class ArgsManager
{
    public:
        ArgsManager(int argc, const char* argv[]);
        virtual ~ArgsManager();
        po::variable_value operator[] (std::string option);
        po::variables_map::size_type count(std::string option);
        bool isError();
    protected:
    
    private:
        po::variables_map vm;
        bool error;
};

#endif // ARGS_MANAGER_H
