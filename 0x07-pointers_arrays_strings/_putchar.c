#include <unistd.h>
/**
 * _putchar -writes the character c to standout
 * @c: The character to print
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
