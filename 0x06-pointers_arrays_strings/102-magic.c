#include <stdio.h>
/**
* main - Entry point
*
* Description: Program prints a[2] = 98 and a new line
*
* Return:_Always 0
*/

int main(void)
{
	int n;
	int  a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Write your line of code here ..
	 * You are not allowed to use a
	 * You are not allowed to modify p
	 * Only one statement
	 * You are not allowed to code anything else other than this line of code.
	 */
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
