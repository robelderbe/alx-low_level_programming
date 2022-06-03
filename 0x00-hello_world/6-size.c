#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int a;
	char c;
	long int d;
	long long int b;
	float f;

        printf("size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
