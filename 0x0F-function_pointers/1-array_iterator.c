#include "function_pointers.h"
/**
 * array_iterator - iterate through an array
 * @size: array size
 * @array: target array
 * @action: function pointer to array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
