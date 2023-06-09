#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: int c
 * Return: 1 if c is a digit 0 for others.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
