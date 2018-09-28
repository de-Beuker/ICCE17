#include <iostream>

namespace {
    char const text[] =        // define the Raw String Literal
    R"(
    ^\\s+Encryption key:(\\w+)
    ^\\s+Quality=(\\d+)
    ^\\s+E?SSID:\"([[:print:]]+)\
    ^\\s+ssid=\"([[:print:]]+)\
    
    )";
}
int main()
{
    std::cout << text;
}

