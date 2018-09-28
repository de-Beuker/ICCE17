#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
        // to skip program name
    ++argv;

        //Define count as number of combinations needed
    const size_t count = (1 << (argc-1)); 
    
        //Iterate over steps
    for (size_t step = 0; step < count; ++step)
    {
            //Print step number
        cout << step + 1 << ": ";

            //Define bit number to which each argument is assigned
        size_t bitnum = 0;

           //Iterate over every argument (use int to compare with argc)
        for (int argument = 0; argument < argc; ++argument)
        {
                //Go to next bit number
            if (bitnum == 0) 
                ++bitnum;
            else 
                bitnum <<= 1;

                //Check if argument is part of this combination
            if ((bitnum & step) != 0)

                    //If true, print argument in line
                cout << argv[argument] << " ";
        }
            //Go to next step
        cout << "\n";
    }
}
