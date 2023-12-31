#include "main.h"

/**
 * actual_sqrt_recursion - Recursively finds the natural square root of a number
 * @n: Number to calculate the square root of
 * @i: Iterator
 *
 * Return: The resulting square root, or -1 if the square root is not natural
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the square root of
 *
 * Return: The resulting square root, or -1 if the square root is not natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

