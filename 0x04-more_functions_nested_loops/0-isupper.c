#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @c: the number to be checked
 *
 * Return: 1 if upper letter and 0 if something else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

