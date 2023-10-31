#include "main.h"
/**
 * _strdup - copies string to newely allocated space in memory
 * @str : string to copy to new memory
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	char *new;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new = malloc(sizeof(char) * (count + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}
