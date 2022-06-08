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
		if (n >= 0 && n <= 15)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j > 0)
				{
					_putchar(',');
					
