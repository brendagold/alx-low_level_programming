#include "main.h"

/**
 * _islower - checks if a code is lowercase
 *
 * @c: is the int value to be compared with ASCII
 *
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
