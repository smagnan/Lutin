#include "argsmanager.h"

#include <iostream>

ArgsManager::ArgsManager(int argc, const char* argv[]) :
    error(false), vm(NULL)
{
    
    try
    {
        // Set up the description of the options :
        po::options_description desc("Allowed options");
        desc.add_options()
            (OPTION_FILE_LABEL, po::value<std::string>(), OPTION_FILE_MESSAGE)
            (OPTION_PRINT_LABEL, OPTION_PRINT_MESSAGE)
            (OPTION_ANALYZE_LABEL, OPTION_ANALYZE_MESSAGE)
            (OPTION_EXECUTE_LABEL, OPTION_EXECUTE_MESSAGE)
            (OPTION_OPTIMIZE_LABEL, OPTION_OPTIMIZE_MESSAGE)
            (OPTION_HELP_LABEL, OPTION_HELP_MESSAGE);
            
        // Prepare to set file option as positional option :
        po::positional_options_description file;
        file.add(OPTION_FILE_LABEL,-1);
        
        // Parse the options :
        po::store(po::command_line_parser(argc, argv).
              options(desc). // set the description
              positional(file). // set the positional options
              run(), // Parse the options
              vm); // Variable map
        po::notify(vm);
    }
    // Error management :
    catch (po::too_many_positional_options_error e)
    {
        std::cerr << OPTION_ERROR_MESSAGE << OPTION_ERROR_MESSAGE_SEP
                << e.what() << std::endl;
        error = true;
    }
    catch (po::unknown_option e)
    {
        std::cerr << OPTION_ERROR_MESSAGE << OPTION_ERROR_MESSAGE_SEP
                << e.what() << std::endl;
        error = true;
    }
    catch (po::error e)
    {
        std::cerr << OPTION_ERROR_MESSAGE << std::endl;
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
