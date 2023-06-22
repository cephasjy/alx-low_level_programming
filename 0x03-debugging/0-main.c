#include <stdio.h>

/**
 * positive_or_negative - prints if integer is positive or negative
 * @num: the integer to be checked
 *
 * Return: void
 */
void positive_or_negative(int num)
{
	if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else if (num < 0)
	{
		printf("%d is negative\n", num);
	}
	else
	{
		printf("The number is zero\n");
	}
}

/**
 * main - tests function that prints if integer is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}

