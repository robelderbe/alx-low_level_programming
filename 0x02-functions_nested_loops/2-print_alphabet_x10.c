#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints the alphabet with _putchar ten times
 *
 * Return: void
 */


 void print_alphabet_x10(void)
{
	int j;
	char a;

	for (a = 0; a <= 9; a++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
