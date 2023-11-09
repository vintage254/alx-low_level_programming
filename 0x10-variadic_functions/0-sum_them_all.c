#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters to be summed.
 * @...: The variable number of arguments to be summed.
 *
 * Return: The sum of all the parameters. If n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int re = 0;
	va_list numbers;

	va_start(numbers, n);


	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		re = re + va_arg(numbers, int);
	}
	va_end(numbers);
	return (re);
}
