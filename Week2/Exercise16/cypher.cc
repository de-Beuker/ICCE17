#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    char character;
			while(cin.get(character))
			{
                if (isalpha(character))
                {    
                    if (character > 'c' || character < 'a')
                        character -= 3;
                    else
                    {
                        character = 
                            character == 'c' ?
                                'z'
                            :
                                character == 'b' ?
                                    'y'
                                :
                                    character == 'a' ?
                                        'x'
                                    :
                                        character;
                    }
                }    
                cout << character;
			}
	
}
