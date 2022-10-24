#include "main.h"
#include <stdio.h>

/**
 * print_array -function  prints n elements of an array of integers,
 * followed by a new line
 * @a: input array.
 * @n: input n elements
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
