#include <iostream>
namespace {
    
char const text[] =        // define the Raw String Literal
    R"(
    ***********
    hello world
    ***********
    )";
    
}

int main()
{
    std::cout << text;
}

