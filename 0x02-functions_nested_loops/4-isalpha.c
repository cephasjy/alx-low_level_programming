#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase or uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if lowercase/uppercase, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

