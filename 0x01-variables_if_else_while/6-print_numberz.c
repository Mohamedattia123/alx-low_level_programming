#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing from 0 - 9 without printf
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
{
	putchar(x + 48);
	x++;
}
	putchar('\n');
	return (0);
}
