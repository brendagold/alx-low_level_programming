#include "main.h"

/**
 * _abs - prints the sign of the integer
 *
 * @n: is the int value to be operated on
 *
 * Return: an unsigned int
 *
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}

}
