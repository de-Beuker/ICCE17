// boardPosition.cc

#include "main.ih"

size_t boardPosition(entrant *queue, size_t entrantNr)
{
    
    if (entrantNr == 1)
        return 0;
        // loop through current queue
    size_t position = 0;
    for (size_t element = 0; element != entrantNr; ++element)
    {       // update position
        position = element; 
            // if blue eyed encountered
        if (queue[element].eyeColor == 1)
            break;
    }
    return position;
}