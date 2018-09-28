//ex20.h
#include <iostream>
#include <unistd.h>
#include <string>
#include <getopt.h>
	//Define MODE
	enum MODE
	{
		ERROR,
		CAPITALIZE,
		LOWER_CASE,
		VERSION,
		USAGE
	};

	enum alphabetASCII
	{
		A_LOWER = 97,
		Z_LOWER = 122,
		A_UPPER = 65,
		Z_UPPER = 90,
	};
	const size_t capitalizeASCIIoffset = 32;

MODE getArguments(int argc,char* argv[]); 	//Reads options from argv and returns a MODE for process()
void process(MODE mode);					//Processes the command and calls the appropriate function
void usage();								//Prints usage info
void version();								//Prints version
void capitalize();							//Prints 'file' with all letters capitalized
void lower_case();							//Prints 'file' with all letters lowercase
