//main.cc
#include <iostream>
#include <string>
using namespace std;

int squareRoot (const string &number, size_t currentdigit = 0, size_t remainder = 0,size_t leftFactor = 0);

int main (int argc, char* argv[])
{
	//Obtain Input
	string input = argv[1];
	if (input.size () % 2 != 0)
		input = "0" + input;
	const string &number = input;

	cout << squareRoot (number) << "\n";
}
