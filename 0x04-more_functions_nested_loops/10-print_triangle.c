#include "main.h"
/**
* print_triangle - print a triangle followed by a new line
* @size: size of the trangle
*/
void print_triangle(int size)
{	if (size <= 0)
{	_putchar('\n');
}
else
{	int i, j;
for (i = 1; i <= size; i++)
{	for (j = i; j <= size; j++)
{
_putchar('_');
}
for (i = 1; j <= 1; j++)
{	_putchar('#');
}
_putchar('\n');
}
}
}
