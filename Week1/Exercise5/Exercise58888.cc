#include <iostream>


using namespace std;

int toEvenOrNotToEven(int value)
{
	if(value == 0)
		return 1;
	else if(value == 1)
		return 0;
	else if(value<0)
		return toEvenOrNotToEven(-value);
	else
		return toEvenOrNotToEven(value-2);		
}



int main() {
	int value;
	cin >> value;

	cout << ( value % 2 == 1 ? "odd" : "even") << '\n';
	cout << ( (value/2*2) == value ? "even" : "odd") << '\n';
	cout << ( (value & 1) == 1 ? "odd" : "even") << '\n';
	cout << ( (( value >> 1) << 1 ) == value ? "even" : "odd") << '\n';
	cout << ( toEvenOrNotToEven(value) == 0 ? "odd" : "even") << '\n';
	

}