#include "ex19.h"

size_t bin_search(size_t value)
{
	//Define binary search boundaries
	size_t low = 0;
	size_t high = sizeof(value);
	size_t mid;

	//Iterate the algorithm
	while (true)
		{
			mid = (low + high) / 2;
			if (value >> mid == 0)
			{
				high = mid;
			}
			else if (mid == low)
			{
				return mid;
			}
			else
			{
				low = mid;
			}
		}
}
