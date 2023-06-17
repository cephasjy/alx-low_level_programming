#include <stdio.h>

/**
 * main - program entry point
 * Return: 0 for success, non-zero for failure
 */
int main(void)
{
	int m, i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (m = j + 1; m <= '9'; m++)
			{
				putchar(i);
				putchar(j);
				putchar(m);

				if (i == '7' && j == '8' && m == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}

