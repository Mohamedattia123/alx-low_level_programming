#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using while to print digits from 0 - 9
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
{
	printf("%d", x);
	x++;
}
	printf("\n");
	return (0);
}
