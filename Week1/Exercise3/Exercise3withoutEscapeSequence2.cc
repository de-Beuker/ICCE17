#include <iostream>

char const text[] =        // define the Raw String Literal
    R"(
    poep
    )";

int main()
{
    std::cout << text;
}

