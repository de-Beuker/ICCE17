#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char **argv)
{
	//Define count as number of combinations needed
	const size_t count = (1 << (argc-1)); 
	
	//Iterate over steps
	for (size_t step = 0; step != count; ++step)
	{
		//Print step number
		cout << step + 1 << ": ";

		//Define bit number to which each argument is assigned
		size_t bitnum = 0;
		size_t argc_unsigned = argc
		//Iterate over every argument
		for (size_t argument = 0; argument != argc; argument++)
		{
			//Go to next bit number
			if (bitnum == 0) ++bitnum;
			else bitnum <<=1;

			//Check if argument is part of this combination
			if ((bitnum & step) != 0)

				//If true, print argument in line
				cout << argv[argument + 1] << " ";
		}
		//Go to next step
		cout << "\n";
	}
}
