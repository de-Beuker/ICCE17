#include "main.ih"

int main(int argc, char **argv)
{
    if (checkArguments(argc, argv))
        return 1;

    if (argc > 2)
        srandom(stoi(argv[2]));


    size_t nSubjects = stoi(argv[1]);
    entrant queue[nSubjects];           // store entrant info in struct
    for (size_t entrantNr = 1; entrantNr <= nSubjects; ++entrantNr)
    {       
        addEntrant(entrantNr, queue);
    }

    displayQueue(nSubjects, queue);
}

