#include <iostream>
#include "function.h"
using namespace std;

void printBig(ostream &out, long long value)
{
  if (value < 0)
  {
    out = "-" + out;
    value = -1 * value;
  }

  if (absoluteValue == 0)
  {
    cout << out;
    return;
  }

  else
  {
    out = value % 1000 + "'" + out;
    number = value / 1000;
  }
  printBig(out, number)
}
