//getArguments.cc
#include "ex20.h"
using namespace std;

MODE getArguments (int argc, char* argv[])
{
	//Define longOpts and shortOpts
	const struct option longOpts[] =
	{
		{ "help", 0, 0, 'h'},
		{ "version", 0, 0, 'v'},
		{ "capitalize", 0, 0, 'c'},
		{ "uc", 0, 0, 'c'},
		{ "lower_case", 0, 0, 'l'},
		{ "lc", 0, 0, 'l'},
		{ 0, }
	};
	const string options = "chlv";
	const char* const shortOpts = options.c_str();

	char character = 0;
	string inputs;

	//Obtain all options from argv
	while(character != (char) -1)
	{
		character = (char) getopt_long(argc,argv,shortOpts,longOpts,0);
		inputs += character;
	}
		//Use if-else ladder to enforce option priority rules
		if (inputs.find('h') != string::npos)
			return USAGE;
		else if (inputs.find('v') != string::npos)
			return VERSION;
		else if  (inputs.find('c') != string::npos && inputs.find('l') == string::npos)
			return CAPITALIZE;
		else if (inputs.find('l') != string::npos && inputs.find('c') == string::npos)
			return LOWER_CASE;
		else if (inputs.find('l') != string::npos && inputs.find('c') != string::npos)
		{
			cout << "cannot process both -c and -l together\n";
			return ERROR;
		}
		else
		{
			cout << "invalid option\n";
			return ERROR;
		}
}
