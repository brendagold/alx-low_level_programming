#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: Always 0 (Success)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int counter = 0, compareVal;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compareVal = s1[counter] - s2[counter];

	return (compareVal);

}
