#include <iostream>
#include "functions.h"

using namespace std;
int main(int argc, char *argv[])
{
  switch (argv[1])
  {
    case -e:
      string text; 
      cin << text;
      convertTextToUrl(text);

    case -d:
      string url;
      cin << url;
      convertUrlToText(url);

    default:
      usage();
  }
}
