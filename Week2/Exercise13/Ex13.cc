// exercise 13
// the assignment was to compare a correct way of reading a file with 
// an incorrect way. providing the argument "ok" chooses the correct way

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
        // store first argument if available
    string cmd = argc > 1 ? argv[1] : "";
        
        // choose method of reading & counting
    if (cmd == "ok")
    {
        size_t count;
        string line;

            //Try to read the next line
        while(getline(cin,line))
            ++count;

        cout << count << "\n";
    } 
    else 
    {
        size_t count;
        string line;

            // continue until end of file is found
        while(!cin.eof())
        {
                // Try to read the next line
            getline(cin,line);
            ++count;
        }
        cout << count << "\n";
    }    
}
