// checkArguments.cc

#include "main.ih"

bool checkArguments(int argc, char **argv)
{
    if (argc < 1)
    {
        cout << "No args. nSubject is required, seed is optional\n";
        return 1;
    }

    return 0;
}