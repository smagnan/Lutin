#include "argsmanager.h"


const std::string OPTION_ANALYZE_LABEL =    "analyze,a";
const std::string OPTION_EXECUTE_LABEL =    "execute,e";
const std::string OPTION_FILE_LABEL =       "input_file";
const std::string OPTION_HELP_LABEL =       "help,h";
const std::string OPTION_OPTIMIZE_LABEL =   "optimize,o";
const std::string OPTION_PRINT_LABEL =      "print,p";
const std::string OPTION_ANALYZE_MESSAGE =  "Static analysis of the program";
const std::string OPTION_EXECUTE_MESSAGE =  "Execute the program";
const std::string OPTION_FILE_MESSAGE =     "Filepath to the Lutin input file";
const std::string OPTION_HELP_MESSAGE =     "Print this help message and exit";
const std::string OPTION_OPTIMIZE_MESSAGE = "Simplify and transform the program";
const std::string OPTION_PRINT_MESSAGE =    "Display the code program on the standard output";
const std::string OPTION_ERROR_MESSAGE =    "Error";
const std::string OPTION_ERROR_SEPARATOR =  " : ";
const std::string OPTION_SHORT_TEXT =       " lut - The LUTin language interpreter";
const std::string OPTION_USAGE_TEXT =       "    Usage: lut [options] <input_file>";
const std::string STYLE_DEFAULT =           "\033[0m";
const std::string STYLE_ERROR = 	        "\033[0;31m";
const std::string STYLE_IMPORTANT =         "\033[0;32m";


ArgsManager::ArgsManager(int argc, const char* argv[]) :
    desc("Allowed options"), vm(NULL), error(false)
{
    
    try
    {
        // Set up the description of the options :
        desc.add_options()
            (OPTION_FILE_LABEL.c_str(), po::value<std::string>()->required(), OPTION_FILE_MESSAGE.c_str())
            (OPTION_PRINT_LABEL.c_str(), OPTION_PRINT_MESSAGE.c_str())
            (OPTION_ANALYZE_LABEL.c_str(), OPTION_ANALYZE_MESSAGE.c_str())
            (OPTION_EXECUTE_LABEL.c_str(), OPTION_EXECUTE_MESSAGE.c_str())
            (OPTION_OPTIMIZE_LABEL.c_str(), OPTION_OPTIMIZE_MESSAGE.c_str())
            (OPTION_HELP_LABEL.c_str(), OPTION_HELP_MESSAGE.c_str());
            
        // Prepare to set file option as positional option :
        po::positional_options_description file;
        file.add(OPTION_FILE_LABEL.c_str(),-1);
        
        // Parse the options :
        po::store(po::command_line_parser(argc, argv).
              options(desc). // set the description
              positional(file). // set the positional options
              run(), // Parse the options
              vm); // Variable map
        po::notify(vm);
    }
    
    // ERROR : too many "input_file" arguments
    catch (po::too_many_positional_options_error e)
    {
        std::cerr << STYLE_ERROR;
        std::cerr << OPTION_ERROR_MESSAGE << OPTION_ERROR_SEPARATOR
                << e.what() << std::endl;
        std::cerr << STYLE_DEFAULT;
        error = true;
    }
    
    // ERROR : Unknown option
    catch (po::unknown_option e)
    {
        std::cerr << STYLE_ERROR;
        std::cerr << OPTION_ERROR_MESSAGE << OPTION_ERROR_SEPARATOR
                << e.what() << std::endl;
        std::cerr << STYLE_DEFAULT;
        error = true;
    }
    
    // ERROR : Required "input_file" argument
    catch (po::required_option e)
    {
        std::cerr << STYLE_ERROR;
        std::cerr << OPTION_ERROR_MESSAGE << OPTION_ERROR_SEPARATOR
                << e.what() << std::endl;
        std::cerr << STYLE_DEFAULT;
        error = true;
    }
    
    // ERROR : Default
    catch (po::error e)
    {
        std::cerr << STYLE_ERROR;
        std::cerr << OPTION_ERROR_MESSAGE << std::endl;
        std::cerr << STYLE_DEFAULT;
        error = true;
    }
    
}


ArgsManager::~ArgsManager()
{
}


po::variable_value ArgsManager::operator[] (std::string option)
{
    return vm[option];
}

po::variables_map::size_type ArgsManager::count(std::string option)
{
    return vm.count(option);
}

bool ArgsManager::isError()
{
    return error;
}

std::ostream& operator<< (std::ostream& out, const ArgsManager& am)
{
    return out << std::endl
    << STYLE_IMPORTANT << OPTION_SHORT_TEXT << STYLE_DEFAULT << std::endl
    << std::endl
    << OPTION_USAGE_TEXT << std::endl
    << std::endl
    << am.desc;
}
