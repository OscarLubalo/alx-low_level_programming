#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign;
	unsigned int res = 0;

	i = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '_')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		else if
	       res = (res = * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
