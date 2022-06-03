#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int a;
	char c;
	long int d;
	long long int b;
	float f;
printf("Size of a char: %d bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
