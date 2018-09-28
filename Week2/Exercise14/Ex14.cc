#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool nonBlankFound = false;
    size_t count = 0;
    string input;

    while (getline(cin,input))
    {
            // Test if line is empty
        if (input.find_first_not_of(" ") == string::npos)
        {
                // Ignore line if only empty lines have been read
            if (nonBlankFound == false)
                continue;
            else
            {
                ++count;
                continue;
            }
        }

            // Print intermediate lines
        for (size_t i = 0; i < count; ++i)
                cout << "\n";

            // Reset empty line count and print line
        nonBlankFound = true;
        count = 0;
        cout << input << "\n";
    }
}
