#include "functions.h"
#include <iostream>

void convertUrlToText(string url)
{
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
      hexString = hexString + url[pos + 2]; //Find the hexadecimal ascii-code
      next = stoi(hexString, nullptr, 16);
      ascii = next;
      cout << ascii;
      pos +=2; //Continue after the url-encoded character
    }

  }
  cout << '\n';
}
