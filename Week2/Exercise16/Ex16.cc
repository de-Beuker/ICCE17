#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	size_t count = 0;

	//Switch on the given argument
	switch(char character = argv[1][0];character)
	{
		case 'b':
		{
			//Increment as long as characters are read
			while(cin.get(character))
			{
				++count;
			}
			cout << count << " bytes" << "\n";
			break;
		}

		case 'w':
		{
			//Increment as long as words are read
			string word;
			while(cin >> word)
			{
				++count;
			}
			cout << count << " words" << "\n";
			break;
		}

		case 'l':
		{
			//Increment per read line, test for EOF
			string line;
			while(getline(cin,line))
			{
				if(cin.eof())
					break;
				++count;
			}
			cout << count << " lines" << "\n";
			break;
		}

		default:
			cout << "Error, unexpected argument '" << argv[1] << "'" << "\n";
	}
}
