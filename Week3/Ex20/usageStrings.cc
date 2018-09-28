#include "ex20.h"
using namespace std;

void usage()
{
 
	cout << "\nex20 V 3.1.4.1.5\n"

	<< "\nUsage: ex20 -h -v -c -l < file\n"
	<< "Where:\n"
	<< "--capitalize (--uc, -c);	capitalize the letters in 'file'\n"
	<< "--help (-h); 				print this usage information\n"
	<< "--version (-v);				show the current version\n"
	<< "--lower_case (-lc, -l)		make all letters in 'file' lower_case\n"

	<< "\nprogram ex20 processes 'file' and writes the results to the standard "
	<< "output stream.\n"
	<< "the program prioritizes help over the other options, and version over  "
	<< "other options except help.\n";
}
