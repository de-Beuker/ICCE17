#include <iostream>
#include <string>
using namespace std;

int main (int argc, char **argv)
{
		int var = 0;
	
	while (true)
	{
		cout << ">";
		string cmd;
		cin >> cmd;
		if (cmd == "ret")
		{
			return 0;
		}
		int value;
		cin >> value;

		//Here the command is interpreted and action is taken accordingly
		if(cmd == "sto")
		{
			var = value;
		}
		else if (cmd == "add")
		{
			var += value;
		}
		else if (cmd == "sub")
		{
			var -= value;
		}
		else if (cmd == "mul")
		{
			var *= value;
		}
		else if (cmd == "div")
		{
			if (value == 0)
			{
				cout << "ZeroDivisionError";
			}
			else
			{
				var /= value;
			}
		}
		else
		{
			cout << "No instruction `" << cmd << "'" << "\n";
		}
		cout << var << "\n";
	}
}