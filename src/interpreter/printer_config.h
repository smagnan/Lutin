// http://en.wikipedia.org/wiki/ANSI_escape_code
// http://ascii-table.com/ansi-escape-sequences.php

// ================================ COLORS

const std::string STYLE_DEFAULT = 	"\033[0m";	  	// Default: white
const std::string STYLE_ERROR = 	"\033[0;31m"; 	// Red
const std::string STYLE_ERROR_T = 	"\033[1;31m"; 	// Red bold (Title)
const std::string STYLE_VALUE =		"\033[0;32m"; 	// Green
const std::string STYLE_WARN = 		"\033[0;33m"; 	// Yellow
const std::string STYLE_WARN_T =	"\033[1;33m"; 	// Yellow bold (Title)
const std::string STYLE_DECLAR = 	"\033[1;34m"; 	// Blue bold
const std::string STYLE_SYMBOL = 	"\033[1;35m"; 	// Magenta bold
const std::string STYLE_INFO = 		"\033[0;36m"; 	// Cyan	
const std::string STYLE_INFO_T =	"\033[1;36m"; 	// Cyan (Title)

// ================================ MESSAGES

const std::string MSG_ERROR = 		"ERROR: ";
const std::string MSG_WARN = 		"WARNING: ";
const std::string MSG_INFO = 		"INFO: ";

// ================================ ARG COUNT

const int NB_ARGS_PRINT_STR = 		6;