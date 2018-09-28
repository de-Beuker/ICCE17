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
      string textToAnalyse;
      
      while (getline(cin, textToAnalyse))
      {
	bool readingWord = false;
   
        for (int index = 0; index < textToAnalyse.length() ; index++)
        {
	  
	  if(isspace(textToAnalyse[index]))
	  {
	    readingWord = false;
	  }

          else if(!readingWord)
          {
	    readingWord = true;
	    numberOfWords++;
	  }
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
