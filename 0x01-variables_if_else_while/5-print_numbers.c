#include <stdio.h>
/**
 * main-entry point of the program
 * Return:0 if there's no error
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
