// exercise 11
// in this exercise we make a multiplication table. the program takes
// one integer as argument from the command-line and prints the table 

#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[])
{   
        // store input as integer
    size_t value = stoi(argv[1]);

        //Iterate from 1 to 10 and print the respective table row
    for (size_t idx = 1; idx <= 10; ++idx) 
    {
		cout << value << " * " << idx << " = "
    	<< value * idx << '\n';
    }
}
