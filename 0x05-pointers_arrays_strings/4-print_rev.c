#include "main.h"
/**
 * print_rev  - prints a string, in reverse, followed by a new line.
 * @s: string
 * Return : 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int t;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	for (longi = 0; t > 0; t--)

	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
