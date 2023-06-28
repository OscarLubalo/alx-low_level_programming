#include "main.h"
/**
* swap_int - swap the value of two integers.
* @a: interger to swap
* @b: integer to swap
*/
void swap_int(int *a, int *b)
{	int c;
c = *a;
*a = *b;
*b = c;
}
