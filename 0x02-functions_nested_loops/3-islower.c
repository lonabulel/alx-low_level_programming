#include "main.h"
/**
 *_islower - checks if the character is a lower case
 * using the for loop and function prototype
 * Returns: Either 0 or 1
 */
int _islower(int c)
{
	int r;

	if ((c >= 'a') && (c <= 'z'))
		r = 1;
	else
		r = 0;

	return (r);
}
