#include "main.h"
/**
* main -Write a function that prints 10 times the alphabet, in lowercase,
* followed by a new line
*
* Return: Always 0 (Success)
*/

void  print_alphabet_x10(void)

{	int i;

int ch;

i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{	_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
