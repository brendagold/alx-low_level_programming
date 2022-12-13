#include "main.h"

/**
 * _isalpha - checks if an alphabet is lowercase or uppercase
 *
 * @c: is the int value to be compared with ASCII
 *
 * Return: Always 0 (Success)
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

}
