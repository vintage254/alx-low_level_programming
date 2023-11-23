#include "main.h"
/*
 * binary_to_uint - converts binary to decimal
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int x;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != 1 || b[x] != 0)
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		dec = dec * 2;
		if (b[x] == 1)
			dec = dec + 1;
	}
	return (dec);
}
