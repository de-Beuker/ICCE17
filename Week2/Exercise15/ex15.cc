#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[])
{
        //Validate amount of arguments 
    if (argc != 3)
    {
        cout << "Unexpected number of arguments \n" ;
        return 0;
    }

    const size_t radix = stoi(argv[1]);
    int value = stoi(argv[2]);
    
        //Validate radix
    if ( !(1 < radix && radix < 37)) 
    {
        cout << "Radix out of range \n";
        return 0;
    }

    string answer;
    size_t insertPos;

        //Test for negative (Necessary?)
    if (value < 0)
    {
        insertPos = 1;
        value *= -1;
        answer = "-";
    } 
    else 
    {
        insertPos = 0;
        answer = "";
    }
        // store all possible digits in a string
    const string digits = "0123456789abcdefghijklmnopqrstuvwxyz";
        
        //Execute algorithm to compute digits
    while (value != 0)
    {
            // determine next digit of value in current radix system
        size_t digit = value % radix;

            // insert digit from string of digits into answer string
        answer.insert(insertPos,1,digits[digit]);
        
            // divide value by radix to prepare for computing next digit
            // in next iteration
        value /= radix;
    }
    
    cout << answer << "\n";
}
