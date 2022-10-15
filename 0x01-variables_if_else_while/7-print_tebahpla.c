#include <stdio.h>
/**
 * main-entry point into the program
 * Return:0 if there's no error
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
