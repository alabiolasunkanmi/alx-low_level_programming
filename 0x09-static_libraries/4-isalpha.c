#include "main.h"
/**
 * _isalpha - Confirm if character is alphabet character
 * @c: type int character
 * Return: 1 if c is a letter, lowercase or uppercase and otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
