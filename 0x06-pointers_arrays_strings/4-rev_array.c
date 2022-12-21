#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: pointer to array
 * @n: pointer to element
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int temp, counter = 0;

	n = n - 1;

	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}

}
