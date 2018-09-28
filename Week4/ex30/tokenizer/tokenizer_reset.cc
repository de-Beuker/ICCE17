#include "tokenizer.ih"
#include <limits> //for infinite cin.ignore()

void Tokenizer::reset()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	
}


