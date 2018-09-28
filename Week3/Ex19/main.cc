#include "ex19.h"

double ln2 = log(2);

int main(int const argc, char* const argv[])
{
	if (argc != 3 && argc != 4)
	{
		cout << "incorrect amount of arguments\n";
		return 1;
	}
	
	//If no third argument is given, set count to 1. Otherwise set count to argument
	size_t const count = (argc == 4 ? stoi(argv[3]) : 1);
	size_t offset;
	clock_t time = clock();
	size_t value = stoi(argv[1]);

	//For loop to execute the functions multiple times for speed testing
	for (size_t idx = 0; idx != count; ++idx)
	{
		//Choose desired method
		switch(size_t const method = stoi(argv[2]); method)
		{
			case 1:
				offset = bit_shift(value);
				break;
				
			case 2:
				offset = log_div(value);
				break;

			case 3:
				offset = bin_search(value);
				break;

			default:
				cout << "unexpected method";
				return 1;
		}
	}
	time = clock() - time;

	//Output results
	cout << count << " times\n" 
	<< time << " clicks\n" 
	<< time/CLOCKS_PER_SEC << " seconds\n"
	<< "MSbit of " << argv[1] 
	<< " is at bit offset " << offset << "\n";
}
