#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Print times table of 0 to n times not more than 15
 *
 * @n: number of times
 *
 * Return: Always 0
 */

void print_times_table(int n)
{
	int i, j, product;
	
	if (n < 0 || n >= 15)
		return;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar('0' + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product > 9 && product < 100)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}

			}
		}
		_putchar('\n');
	}

}
