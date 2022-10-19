#include <stdio.h>
/**
 * main - entry point of the program
 * Description: Program print the first 50 fibonacci numbers,
 * starting with 1 and 2.
 * Return: 0 if no error occured
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}

