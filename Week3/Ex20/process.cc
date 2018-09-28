#include "ex20.h"

void process (MODE mode)
{
	switch(mode)
	{
		case USAGE:
			usage();
			break;

		case VERSION:
			version();
			break;

		case CAPITALIZE:
			capitalize();
			break;

		case LOWER_CASE:
			lower_case();
			break;
		default:;
	}
}
