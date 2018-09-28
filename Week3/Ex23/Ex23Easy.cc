#include <iostream>
#include <locale>
using namespace std;

int main()
{
  int bigNumber = 1'000'000;
  cout.imbue(locale("")); //Make cout print separators automatically
  cout << bigNumber << '\n';
}
