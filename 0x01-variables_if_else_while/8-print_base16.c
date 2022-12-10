#include <stdio.h>

/**
 * main - print numbers between 0-9 and leters between a-f
 *
 * Return: Always 0 (|Success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
