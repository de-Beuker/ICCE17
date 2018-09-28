#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char **argv)
{
	//Define count as number of combinations needed
	int count = pow(2, argc - 1);
	//Iterate over steps
	for(int step = 0; step != count; step++)
	{
		//Print step number
		cout << step + 1 << ": ";
		//Iterate over every argument
		for(int argument = 0; argument != argc; argument++)
		{
			//Assign bit to argument
			int bitnum = pow(2,argument);
			//Check if argument is part of this particular combination
			if((bitnum & step) != 0)
			{
				//If true, print argument in line
				cout << argv[argument + 1] << " ";
			}
		}
		//Go to next step
		cout << "\n";
	}
}