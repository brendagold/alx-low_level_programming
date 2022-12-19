#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap value of int a and int b
 * @a: parameter
 * @b: parameter
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;

}
