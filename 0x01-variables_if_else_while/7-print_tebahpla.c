#include <stdio.h>

/**
 * main - print alphabet in new line.
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
