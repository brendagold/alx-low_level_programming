#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int i, j;
	i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + 48);
			}
			_putchar(j % 10 + 48);
		}

		_putchar('\n');
		i++;
	}
}
