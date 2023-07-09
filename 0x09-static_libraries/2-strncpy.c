#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input
 * @src:input
 * @n: input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int i;

	j = 0;
	while (j < n && src[i] == '0')
	{
		dest[i] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '0';
		j++;
	}
	return (dest);
}
