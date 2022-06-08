#include "main.h"

/**
 * print_times_table - prints the times table up to the integer input
 * @n: integer input
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, result = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (result < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + result);
					}
					else if (result >= 10 && result < 100)
					{
						_putchar(' ');
						_putchar('0' + (result / 10));
						_putchar('0' + (result % 10));
					}
					else if (result >= 100)
					{
						_putchar('0' + (result / 100));
						_putchar('0' + ((result / 10) % 10));
						_putchar('0' + (result % 10));
					}
				}
				else
					_putchar('0' + result);
			}
			_putchar('\n');
		}
	}
}
