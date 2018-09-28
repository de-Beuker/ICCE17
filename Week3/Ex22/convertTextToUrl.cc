#include "functions.h"
#include <iostream>

void convertTextToUrl(std::string text)
{
  string const allowedChar = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_.~";
  int asciiNumber;
  for (size_t pos = 0; pos != text.length(); ++pos)
  {
     if (allowedChar.find_first_of(text[pos]) != -1)
       cout << text[pos];
     else
     {
       asciiNumber = text[pos];
       cout << "%" << hex << asciiNumber;
     }
  }
  cout << '\n';
}
