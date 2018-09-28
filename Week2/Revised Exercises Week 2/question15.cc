#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
  if (argc != 3)
    cout << "Incorrect number of arguments inputted" << '\n';
  
  int radix = stoi(argv[1]);
  
  if (radix <= 1 || radix > 36)
    cout << "It is not possible to use the inputted radix" << '\n';
  
  int decimal = stoi(argv[2]);
  cout << decimal << ", displayed using radix " << radix << " is: ";
  
  if (decimal != 0)
  {
    string newBaseNumber;
    
    if (decimal < 0)
      newBaseNumber = "-";
    
    string nextValue;
    string radixElements = "0123456789abcdefghijklmnopqrstuvwxyz";
    
    while (decimal != 0)
    {
      nextValue = radixElements[decimal % radix];
      newBaseNumber = nextValue + newBaseNumber;
      decimal = decimal / radix;
    }
    
    cout << newBaseNumber << '\n';
  }

  else
    cout << "0" << '\n';
}
