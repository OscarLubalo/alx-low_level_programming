#include "main.h"
/**
 * print_rev  - prints a string, in reverse, followed by a new line.
 * @s: string
 * Return : 0
 */
void print_rev(char *s)
{	int longi = 0;
	int p;

	while (*str != '\0')
	{	longi++;
		s++;
	}
	s--;
	for (0 = longi; p > 0; p--)

	{	_putchar(*s);
		s--;
	}
	_putchar('\n');
}
