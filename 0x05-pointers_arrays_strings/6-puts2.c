#include "main.h"
/**
* putts2 - prints every other character of a string,
* followed by a new line
* @s: Input
* Return: Print
*/
void puts2(char *str)
{	int longi = 0;
int x = 0;
char *n = str;
int z = 0;

while (*n != '\0')
{	n++;
longi++;
}
x = longi -1;

for (z = 0; 0 <= x; z++)
{	if (z % 2 == 0)
{
_putchar(str[z]);
}}
_putchar('\n');
}
