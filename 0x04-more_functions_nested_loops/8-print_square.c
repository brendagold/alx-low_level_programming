#include "main.h"

/**
 * print_square - print diagonally
 * @size: parameter
 * Return: 0 if successful
 */

void print_square(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
