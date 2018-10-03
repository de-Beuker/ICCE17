// displayQueue.cc

#include "main.ih"

void displayQueue(size_t nSubject, entrant queue[])
{
    for (size_t queueNum = 0; queueNum != nSubject; ++queueNum)
    {
        cout << queueNum + 1 << ": " 
             << (queue[queueNum].eyeColor ? "blue" : "brown") 
             << " (" << (queue[queueNum].entryNr) << ") \n";
    }
}