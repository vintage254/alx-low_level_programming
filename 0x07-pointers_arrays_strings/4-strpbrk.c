#include "main.h"
/**
 * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */
char *_strpbrk(char *s, char *accept)
{
	int f;
	int x;

	for (f = 0; s[f] != '\0'; f++)
	{
		for (x= 0; accept[x] != '\0'; x++)
		{
			if(s[f] == accept[x])
				return(s + f);
		}
	}
	return (0);
}
