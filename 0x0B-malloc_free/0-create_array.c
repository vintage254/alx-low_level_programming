#include "main.h"

/**
 * create_array - creates array
 * @size: size of array
 * @c: characters to store in array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptarray;

	unsigned int x;

	if (size == 0)
		return (NULL);
	ptarray = malloc(size * sizeof(char));
	if (ptarray == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ptarray[x] = c;

	return (ptarray);
}
