#include <iostream>
#include <string>
using namespace std;

int main (int argc, char **argv)
{
        // define variable acting as memory
    int var = 0;

    while (true)
    {
            // prompt the user for a command
        cout << '>';
        string cmd;
        cin >> cmd;

            // exit program on 'ret' command
        if (cmd == "ret")
            return 0;

            // retrieve expected integral value
        int value;
        cin >> value;

            // check if command is valid
        if ( !(cmd == "sto" || cmd == "add" || cmd == "sub" || 
               cmd == "mul" || cmd == "div") )
        {
            cout << "No instruction `" << cmd << "'" << "\n";
            continue;
        }


            // the program switches on the third character of the command
            // because it is unique in every command
        switch(char character = cmd[2];character)
        {
                // The command and value are processed
            case 'o':
                var = value;    // Storage
            break;
                
            case 'd':
                var += value;    // Addition
            break;

            case 'b':
                var -= value;    // Subtraction
            break;

            case 'l':
                var *= value;    // Multiplication
            break;

            case 'v':
                    if(value == 0)     // Test for div/0
                        cout << "ZeroDivisonError" << "\n";
                    else 
                        var /= value;     // Division
            break;    
        }

        cout << var << "\n";
    }
}
