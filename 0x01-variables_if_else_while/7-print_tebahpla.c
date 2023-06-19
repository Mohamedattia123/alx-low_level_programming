#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing alphabet in reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
	putchar(x);
	x--;
	}
	putchar('\n');
	return (0);
}
