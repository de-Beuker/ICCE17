#include <iostream>
#include <string>

using namespace std;
int main()
{
  string url;
  cin >> url;
  string hexString;
  int asciiNumber;
  int next;
  char ascii;
  for (size_t pos = 0; pos != url.length(); ++pos)
  {
    asciiNumber = url[pos];
    if (asciiNumber != 37) //check for %
      cout << url[pos];
    else
    {
      hexString = url[pos + 1];
      hexString = hexString + url[pos + 2]; 
      next = stoi(hexString, nullptr, 16); 
      ascii = next; //Make "next" into an ascii-character
      cout << ascii;
      pos +=2; //Continue after the url-encoded character
    }

  }
  cout << '\n';
}
