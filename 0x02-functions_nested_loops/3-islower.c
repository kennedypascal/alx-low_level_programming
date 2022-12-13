#include "main.h"

/**
 * islower - shows 1 if the input is a lowercase character.
 * Another case, shows 0.
 *
 * @c: the charactr is ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
