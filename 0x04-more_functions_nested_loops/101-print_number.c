#include "main.h"

/**
 * print_number - Print any number one character at a time
 * @n:integer to print
 *
 * Return: Nothing
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}

	if ((n >= 100) && (n < 1000))
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}

	if ((n >= 10) && (n < 100))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n < 9 && n >= 0)
	{
		_putchar(n % 10 + '0');
	}
}
