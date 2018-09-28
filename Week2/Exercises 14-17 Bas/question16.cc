#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
  char c;
  switch(*argv[1])
  {
    case 'b':
    {
      int numberOfBytes = 0;
      
      while (cin.get(c))
      {
	numberOfBytes++;
      }
      
      cout << numberOfBytes << " bytes" << '\n';
      break;
      
    }

    case 'w':
    {
      int numberOfWords = 0;
      bool readingWord = false;
      
      while (cin.get(c))
      {
	  if(c = ' ')
	  {
	    readingWord = false;
	  }
	  
	  else if(!readingWord)
	  {
	    readingWord = true;
	    numberOfWords++;
	  }
	
      }

      cout << numberOfWords << " words" << '\n';
      break;
      
    }
      
    case 'l':
    {
      int numberOfLines = 0;
      string line;
      
      while(getline(cin, line))
      {
	numberOfLines++;  
      }

      cout << numberOfLines << " lines" << '\n';
      break;
    }
      
    default:
       cout << "You did not enter a valid argument '\n'";
      
    }

}
