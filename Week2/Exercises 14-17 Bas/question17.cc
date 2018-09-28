#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
   cout << argv[0] << "'s arguments:\n";
    
   for (int idx = 0; idx < argc; ++idx)
   {
     cout << argv[idx] << endl;
   }

   int nr; 
   while(true)
   {
      cout << "Enter the number of a command line argument to "
              "capitalize (or -1 to quit) ";
      cin >> nr;
      if(nr == -1)
      {
        break;
      }
                
      else if(nr < argc && nr >= 0)
      {
	capitalize(argv[nr]);
      }

      else
      {
	cout << "The given input is incorrect" << '\n';
      }
    }

    string reverse;
    reverse = argv[0];

    for (int idx = 0; idx < reverse.length() / 2; ++idx)
    {
      swap(reverse[idx], reverse[reverse.length() - 1 - idx]);
    }
    
    cout << reverse << endl;
}
