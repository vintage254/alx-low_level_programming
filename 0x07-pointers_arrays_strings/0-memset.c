#include "main.h"

/**
 * _memset - Fills a memory area with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte to be copied into the memory area.
 * @n: The number of times to copy 'b'.
 *
 * Return: A pointer to the memory area 's'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
