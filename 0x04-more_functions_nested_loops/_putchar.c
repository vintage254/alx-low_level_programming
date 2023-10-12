#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, the number of characters written. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
