#include "main.h"
/**
 * print_array - a function that prints n element of an array.
 * @a: Array name
 * @n: is the number of element  of the array to be printed
 * Return: a and n Input
 */
void print_array(int *a, int n)
{	int i;
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d,", a[i]);
	}
	if (
