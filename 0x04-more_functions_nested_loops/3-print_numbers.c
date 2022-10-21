#include "main.h"

/**
 * print_numbers - prints numbers, from 0 to 9, and a new line
 *
 * Return: 0 if no error occured
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
