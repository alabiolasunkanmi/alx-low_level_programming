#include "main.h"

/**
 * set_string - function sets the value of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
