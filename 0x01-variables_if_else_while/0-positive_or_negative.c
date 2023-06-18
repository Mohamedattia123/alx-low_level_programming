#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Entry point
 *
 * Description: Write positive negative and zero using if
 *
 * Return: always 0 (success)
*/

	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);

	else if  (n == 0)
	printf("%d is Zero\n", n);

	else
	printf("%d is negative\n", n);

	return (0);
}
