#include <iostream>
using namespace std;

int main() 
{
    size_t value;
    cin >> value;

            // remainder of odd number divided by 2 is 1
    cout << (value % 2 ? "odd" : "even")
         << '\n'
         
            // int does not store the fraction when dividing an odd 
            // number by 2. the value changes when it is odd
         << (value / 2 * 2 == value ? "even" : "odd")
         << '\n'
         
            // last bit of integer is 1 if it is odd
         << ((value & 1) ? "odd" : "even")
         << '\n'
             
            // shifting right and left drops off a set bit if the 
            // original value is odd 
         << (( value >> 1 ) << 1  == value ? "even" : "odd") 
         << '\n'
         
            // bitwise XOR with the value plus 1 results in 1 if
            // value is even. Other bits change if the value was odd
         << ((value ^ (value + 1)) == 1 ? "even" : "odd")
         << '\n'
         
            // if value is odd, subtracting 1 will not change other 
            // bits keeping value the same after bitwise OR
         << ((value | (value - 1)) == value ? "odd" : "even")
         << '\n';
}
