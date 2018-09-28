≈#include "ex20.h"
#include <unistd.h>
using namespace std;

void capitalize()
{
	string line;
	// size_t kek = 0;
	//Read line from std::cin
	while (getline(cin,line))
	{
		//For every character test if it is a lowercase letter
		//if so capitalize it
		for (char& character : line) 
		{
			// if (kek == 0)
			// {
				// kek = 1;
    			if (character >= A_LOWER && character <= Z_LOWER)
    				character -= capitalizeASCIIoffset;
			// }
			// else kek = 0;


		}
	cout << line << "\n";
	}
}
