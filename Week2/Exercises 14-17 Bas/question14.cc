#include <iostream>

using namespace std;

int main()
{
  cout << "Please input the text to read" << '\n';
  cout << "Press CTRL + d after pressing ENTER to end inputting text"
       << '\n';
  
  string line;
  string output; 
  bool firstNonEmptyLineRead = false;
  int emptyLines = 0;
  while (getline(cin, line))
  {
    if(!firstNonEmptyLineRead)
    {
      if(!line.empty())
      {
        output = line + '\n';
        firstNonEmptyLineRead = true;
      }
    }

    else if (line.empty())
    {
      emptyLines++;
    }
    
    else
    {
      firstNonEmptyLineRead = true;
      for (int nrEmpty = 0; nrEmpty < emptyLines; nrEmpty++)
	{
	  output = output + '\n';
	}
      emptyLines = 0;
      output = output + line + '\n';
    }
  }
  cout << output;
}


