#include <stdio.h>
#include "main.h"

/**
 * print_array - Function prints element of array of integers
 * @a: pointer value
 * @n: number of element
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");
}
