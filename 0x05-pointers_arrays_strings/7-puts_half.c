#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - puts half of int
 * @str: string to split
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	if (_strlen(str) % 2 != 0)
	{
		count++;
	}
	for (i = (_strlen(str) + count) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
