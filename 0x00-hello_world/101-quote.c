#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 1 (Success)
*/
int main(void)
{
	const char *text;

	text = "and that piece of art is useful\" - Dora Korpar,2015-10-19\n";
	write(2, text, strlen(text));

	return (1);
}
