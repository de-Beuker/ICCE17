//squareRoot.cc
#include <string>
using namespace std;

int squareRoot (const string &number, size_t currentdigit = 0, size_t remainder = 0,size_t leftFactor = 0)
{
	//Test for end of string to end the recursive call
	if (currentdigit == number.size())
		return leftFactor / 2;

	//define Variables
	size_t twoDigits = stoi(number.substr(currentdigit,2));
	size_t currentNumber = twoDigits + (remainder * 100);

	//Find biggest rootNum that satisfies the equation
	size_t rootNum = 9;
	while (((leftFactor * 10 + rootNum) * rootNum) > currentNumber)
		--rootNum;

	//To compute the remainder and leftFactor for the next step
	remainder = currentNumber - ((leftFactor * 10 + rootNum) * rootNum);
	leftFactor = leftFactor * 10 + 2 * rootNum;

	//Call function to compute the rest of the root
	return squareRoot (number, currentdigit + 2, remainder, leftFactor);
}
