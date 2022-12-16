#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 15; j++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}

		_putchar('\n');
	}
}
