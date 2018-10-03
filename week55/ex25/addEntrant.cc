// addEntrant.cc

#include "main.ih"

void addEntrant(size_t entrantNr, entrant *queue)
{   
        // retrieve next position for entrant to take place
    size_t position = boardPosition(queue, entrantNr);

        // shift all blue eyed persons back one place
    for (size_t person = entrantNr; person != position; --person)
    {
        queue[person].eyeColor = queue[person - 1].eyeColor;
        queue[person].entryNr = queue[person - 1].entryNr;
    }
        // place entrant in queue
    queue[position].eyeColor = random() % 2;
    queue[position].entryNr = entrantNr; 


}        