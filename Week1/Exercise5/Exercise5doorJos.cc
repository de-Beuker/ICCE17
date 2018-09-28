#include <iostream>
#include <string> 

using namespace std;

int isEven(int value)
{
	if(value == 0)
		return 1;
	else if(value == 1)
		return 0;
	else if(value<0)
		return isEven(-value);
	else
		return isEven(value-2);		
}



int main() {
	int value;
    std::string s = std::to_string(value);
	cin >> value;

	cout << ( value % 2 == 1 ? "odd" : "even") << '\n';
	cout << ( (value/2*2) != value ? "odd" : "even") << '\n';
	cout << ( isEven(value) == 1 ? "odd" : "even") << '\n';
	cout << ( value % 2 == 1 ? "odd" : "even") << '\n';
	cout << (s) << '\n';

}


