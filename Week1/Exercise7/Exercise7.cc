#include <iostream>
using namespace std;

int main() 
{
	size_t value;                                 //Declare variable
	cin >> value;                                 //Retrieve value from cin

	cout << "the value x is "                     //Print text to cout                          
	<< (( value & (value - 1)) == 0 ? "" : "not ")//Test for exact power of two and print                        
	<< "an exact power of two" << "\n";           //Finish printing
}
