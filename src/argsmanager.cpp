#include "argsmanager.h"
#include <fstream>

const std::string OPTION_ANALYZE_LABEL =    "analyze,a";
const std::string OPTION_EXECUTE_LABEL =    "execute,e";
const std::string OPTION_FILE_LABEL =       "input_file";
const std::string OPTION_HELP_LABEL =       "help,h";
const std::string OPTION_OPTIMIZE_LABEL =   "optimize,o";
const std::string OPTION_PRINT_LABEL =      "print,p";
const std::string OPTION_ANALYZE_MESSAGE =  "Static analysis of the program";
const std::string OPTION_EXECUTE_MESSAGE =  "Execute the program";
const std::string OPTION_FILE_MESSAGE =     "Path to the Lutin input file";
const std::string OPTION_HELP_MESSAGE =     "Print this help message and exit";
const std::string OPTION_OPTIMIZE_MESSAGE = "Simplify and transform the program";
const std::string OPTION_PRINT_MESSAGE =    "Display the code program on the standard output";
const std::string OPTION_ERROR_MESSAGE =    "Error";
const std::string OPTION_ERROR_FILE =       "Cannot open the file : ";
const std::string OPTION_ERROR_SEPARATOR =  " : ";
const std::string OPTION_SHORT_TEXT =       " lut - The LUTin language interpreter";
const std::string OPTION_USAGE_TEXT =       "    Usage: lut [options] <input_file>";
const std::string STYLE_DEFAULT =           "\033[0m";
const std::string STYLE_ERROR = 	        "\033[0;31m";
const std::string STYLE_IMPORTANT =         "\033[0;32m";


ArgsManager::ArgsManager(int argc, const char* argv[]) :
    desc("Allowed options"), vm(NULL), error(false), input_file_text("")
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
        
        
        // load the input file
        std::string file_path(vm[OPTION_FILE_LABEL.c_str()].as<std::string>());
        std::ifstream input_file(file_path.c_str());
        std::string line;
        if (input_file.is_open())
        {
            while ( getline (input_file,line) )
            {
                input_file_text += line + "\n";
            }
            input_file.close();
        }
        
        // ERROR : Cannot open file
        else
        {
            manageError(OPTION_ERROR_FILE + file_path);
        }
        
    }
    
    // ERROR : too many "input_file" arguments
    catch (po::too_many_positional_options_error e)
    {
        manageError(e.what());
    }
    
    // ERROR : Unknown option
    catch (po::unknown_option e)
    {
        manageError(e.what());
    }
    
    // ERROR : Required "input_file" argument
    catch (po::required_option e)
    {
        manageError(e.what());
    }
    
    // ERROR : Required "input_file" argument
    catch (po::multiple_occurrences e)
    {
        manageError(e.what());
    }
    
    // ERROR : Default
    catch (po::error e)
    {
        manageError(e.what());
    }
    
}


ArgsManager::~ArgsManager()
{
}

const std::string& ArgsManager::getInputText() const
{
    return input_file_text;
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

void ArgsManager::manageError(std::string what)
{
    std::cerr << STYLE_ERROR;
    std::cerr << OPTION_ERROR_MESSAGE << OPTION_ERROR_SEPARATOR
            << what << std::endl;
    std::cerr << STYLE_DEFAULT;
    error = true;
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
