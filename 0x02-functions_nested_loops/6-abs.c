#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @a: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int a)
{
	int absvalue;

	if (a < 0)
	{
		absvalue = -a;
	}
	else
	{
		absvalue = a;
	}

	return (absvalue);
}

