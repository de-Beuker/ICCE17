#include "ex20.h"
using namespace std;

void lower_case()
{
	string line;
	//Read line from std::cin
	while (getline(cin,line))
	{
		//For every character test if it is a lowercase letter
		//if so capitalize it
		for (char& character : line) 
		{
    		if (character >= A_UPPER && character <= Z_UPPER)
    			character += capitalizeASCIIoffset;
		}
	cout << line << "\n";
	}
}
