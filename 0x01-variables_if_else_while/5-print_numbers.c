#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
