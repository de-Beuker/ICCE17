#include <iostream>

using namespace std;

int main()
{
  size_t radix;
  int decimalNumber;
  
  while (true)
  {
    cout << "Please give a radix and the number to be converted" << '\n';
    cout << "$ number ";
    cin >> radix;
    cin >> decimalNumber;
    if (radix > 1 && radix < 37)
    {
      break;
    }
    else
    {
	cout << "It is impossible to use the inputted radix" << "\n";
    }
  }
  
  int indexPosition = 0;
  string radixSystemElements = "0123456789abcdefghijklmnopqrstuvwxyz";

  cout << decimalNumber << ", displayed using radix " << radix << " is: ";
  
  if (decimalNumber != 0)
  {
    string newBaseNumber;
    
    if (decimalNumber < 0)
    {
      newBaseNumber = "-";
    }
    
    std::string nextNumber;
    
    while (decimalNumber != 0)
    {
      nextNumber = radixSystemElements[decimalNumber % radix];
      newBaseNumber = nextNumber + newBaseNumber;
      decimalNumber = decimalNumber / radix;
    }
    
    cout << newBaseNumber << '\n';
  }

  else
  {
    cout << "0" << '\n';
  }
  
}
