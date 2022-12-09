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
	int CHARACTER = 'A';

	while (character < 'z')
	{
		putchar(character);
		character++;
	}	
	
	while (CHARACTER < 'Z')
	{
		putchar(CHARACTER);
		CHARACTER++;
	}

	putchar('\n');
	return (0);

}
