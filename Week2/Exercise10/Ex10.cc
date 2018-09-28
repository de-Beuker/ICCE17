#include <iostream>
#include <string>


using namespace std;

int main ()
{   
	//Prompt user for value and store value
	cout << "Please enter a positive integer: ";
    const size_t value;
    cin >> value;

    //Iterate from 1 to 10 and print the respective table row
    for (size_t idx = 1; idx != 11; ++idx) 
    {
		cout << value << " * " << idx << " = "
    	<< value * idx << '\n';
    }
	
}
