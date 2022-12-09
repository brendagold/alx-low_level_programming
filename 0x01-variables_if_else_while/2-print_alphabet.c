#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int character = 'a';

	while (character < 'z')
	{
		putchar(character);
		character++;
	}
		
	putchar('\n');
	return (0);

}
