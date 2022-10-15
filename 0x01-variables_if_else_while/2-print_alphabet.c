#include <stdio.h>
/**
 * main-entry of the program
 * Return:0 if there's no error
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
