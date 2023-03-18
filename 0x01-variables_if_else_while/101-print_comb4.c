#include <stdio.h>

/**
 * main - print numbers of three digits  no 0 , no 1 , no 2
 * Return: Alwas 0 (success)
 */

int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0' ; hundred <= '9' ; hundred++) /*hundred place*/
	{
		for (ten = (hundred + 1) ; ten <= '9' ; ten++) /*ten=100s+1*/
		{
			for (one = (ten + 1) ; one <= '9' ; one++) /*ones*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
