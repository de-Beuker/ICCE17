//main.cc
#include "ex20.h"
using namespace std;

int main (int argc, char* argv[])
{
	//Test for file redirection
	if (isatty(STDIN_FILENO))
	{
		cout << "no file redirection\n";
		process(USAGE);
		return 1;
	}

	//Obtain arguments and return MODE
	//Process mode accordingly
	//return 
	const MODE mode = getArguments(argc,argv);
	if (mode == ERROR)
		return 1;
	else
		process(mode);
}

