#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 for success, non-zero for error
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}

