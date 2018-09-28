//Exercise 14
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	while(true)
	{
		getline(cin,input);
		cout << input.find_first_not_of(" ");
		int value = input.length();
		cout << value << "\n";
	}
}