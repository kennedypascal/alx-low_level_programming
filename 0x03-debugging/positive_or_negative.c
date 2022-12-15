#include <stdio.h>

/**
 * positive_or_negative - function to test if number
 * is positive or negative
 * description: positive_or_negative
 * Return: 0
 */

int positive_or_negative()
{
	int i;

	i = 98;
	if ( i > 0 )
	{
		printf("Number is positive ");
	}
	else if ( i < 0 )
	{
		printf("Number is negative ");
	}
	else
	{
		printf("Number is Zero ");
	}
	return 0;
}
