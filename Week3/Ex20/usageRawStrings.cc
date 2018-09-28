#include "ex20.h"
using namespace std;

void usage()
{
	char const info[] = 
	R"(
	ex20 V 3.1.4.1.5

	Usage: ex20 -h -v -c -l < file
	Where:
	--capitalize (--uc, -c);	capitalize the letters in 'file'
	--help (-h); 				print this usage information
	--version (-v);				show the current version
	--lower_case (-lc, -l)		make all letters in 'file' lower_case

	program ex20 processes 'file' and writes the results to the standard
	output stream.
	the program prioritizes help over the other options, and version over the
	other options except help.
	
	)";
	cout << info;
}
