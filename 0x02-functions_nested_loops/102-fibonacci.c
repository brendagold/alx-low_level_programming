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
	long int first, second, sum;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%d, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%d\n", sum);

	return (0);

}
