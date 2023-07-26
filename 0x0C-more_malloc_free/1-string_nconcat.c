#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: Pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k]; k++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (k = 0; s1[k]; k++)
		concat[len++] = s1[k];

	for (k = 0; s2[k] && k < n; k++)
		concat[len++] = s2[k];

	concat[len] = '\0';
	return(concat);
