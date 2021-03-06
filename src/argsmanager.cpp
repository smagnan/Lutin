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
    desc("Allowed options"), vm(NULL), error(false), filePath("")
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
        
        filePath = vm[OPTION_FILE_LABEL.c_str()].as<std::string>();
        
    }
    
    // ERROR : too many "input_file" arguments
    catch (po::too_many_positional_options_error e)
    {
        manageError("ERROR: too many \"input_file\" arguments");
    }
    
    // ERROR : Unknown option
    catch (po::unknown_option e)
    {
        manageError("ERROR: unknown option");
    }
    
    // ERROR : Required "input_file" argument
    catch (po::multiple_occurrences e)
    {
        manageError("ERROR: required \"input_file\" argument");
    }
    
    // ERROR : Default
    catch (po::error e)
    {
        //manageError("ERROR: please specify arguments");
        manageError("Erreur, veuillez specifier des arguments\n  Utilisation :\n    ../lut [-p] [-a] [-e] [-o] source.lt\n      [-p] affiche le code source reconnu\n      [-a] analyse le programme de maniere statique\n      [-e] execute interactivement le programme\n      [-o] optimise les expressions et instructions");     
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

void ArgsManager::manageError(std::string what)
{
    std::cerr << what << std::endl;
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

std::string ArgsManager::getFilePath()
{
    return vm[OPTION_FILE_LABEL.c_str()].as<std::string>();
}

