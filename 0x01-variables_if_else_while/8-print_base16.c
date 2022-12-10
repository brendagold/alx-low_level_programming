#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	unsigned char character;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(character);
		character++;
	}
	character = '1';
	for (i = 0; i < 6 ; i++)
	{
		putchar('0' + character);
		character++;
	}
	putchar('\n');
	return (0);

}
