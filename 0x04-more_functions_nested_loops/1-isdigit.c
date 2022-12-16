#include "main.h"

/**
 * _isdigit - checks for digits
 * @d: parameter
 * Return: 0 if successful
 */

int _isdigit(int d)
{
	if (d >= 48 && d < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
