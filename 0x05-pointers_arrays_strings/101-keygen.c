#include "main.h"
#include <stdio.h>
/**
 * main - program that generate random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (success)
 */
int main(void)
{	 int pass[100];
	int i, sum, n;

	sum = 0;
	for (i = 0; i < 100; i++)
	{	sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{	n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
