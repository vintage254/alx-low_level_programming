#include<stdio.h>
/* This is the main function.
   It prints the lowercase alphabet in reverse order. */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
