#include "ex19.h"

size_t bit_shift(size_t value)
{
	//Count bit shifts until value is zero
	size_t count = 0;
	while (value != 0)
	{
		value >>= 1;
		++count;
	}
	//Return count - 1 which is the most significant bit
	return count - 1;
}
