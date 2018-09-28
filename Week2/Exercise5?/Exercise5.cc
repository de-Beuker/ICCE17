#include <iostream>
#include <string>
using namespace std;
    
int main()
    
{
    string line = "a";
	string result;
	while (line.length() != 0)
	{
		cout << "Enter text line: " << endl;	
		getline(cin, line);
		if (line == "")
		{
			cout << endl << "KEK" << endl;
		}
	    result = result + "\n" + line;
	
	}
	cout << result << endl;
	return 0;
}