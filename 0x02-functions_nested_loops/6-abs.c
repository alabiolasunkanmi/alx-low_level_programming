#include "main.h"
/**
 * _abs - Program compute the absolute value of an integer
 * @n: int type number
 * Return: The  absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
