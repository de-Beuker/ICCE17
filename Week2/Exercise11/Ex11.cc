#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
       // Define count as number of combinations needed
    const size_t count = 1 << (argc - 1); 
    
       // Iterate over steps
    for (size_t step = 0; step < count; ++step)
    {
          // Print step number (+1 because output starts at 1)
        cout << step + 1 << ": ";

          // declare bit number for argument combinations
        size_t bitnum = 1;

          // Iterate over every argument
        for (size_t arg = 1; arg <= static_cast<size_t>(argc); ++arg)
        {
                // Check if argument is part of this combination
            if ((bitnum & step) != 0)
                cout << argv[arg] << " ";

                // go to next bit
            bitnum <<= 1;
        }
        cout << "\n";
    }
}
