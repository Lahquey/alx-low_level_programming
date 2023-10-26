#include "main.h"
/**
 * binary_to_uint - This one converts a base 2 to unsigned int
 * @b: a string of 1's and 0's
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int f = 0;
	unsigned int uns_int = 0;

	if (!b)
		return (0); /*nothing passed in*/

	while (b[f])
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		uns_int = 2 * uns_int + (b[f] - '0');
		f++;
	}

	return (uns_int);
}
