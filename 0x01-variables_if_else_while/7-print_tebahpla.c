#include<stdio.h>
/*
 * this is the main function
 * it prints the lowercase alphabet in reversre order
 */
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
