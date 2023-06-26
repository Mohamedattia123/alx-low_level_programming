#include "main.h"

/**
 * swap_int - swaping between values
 *
 * @a: Parameter 1
 * @b: Parameter 2
 *
*/
void swap_int(int *a, int *b)
{
int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
