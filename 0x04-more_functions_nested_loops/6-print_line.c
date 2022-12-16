#include "main.h"

/**
 * print_line - draw a line of n
 * @n: parameter
 * Return: 0 if successful
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
