#include <iostream>
#include <string>


using namespace std;

int main (int argc, char **argv){   
    int value = stoi(string(argv[1]));
    for (int n = 1; n <= 10; ++n) {
	cout << value << " * " << n << " = "
    << value * n << '\n';
    }
	
}
