#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	int n;
	char j;

	for(n=0; n < 10; n++)
	{
		for(j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}

}
