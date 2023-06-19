#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing 0 - 9 with comma and space
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
{
	putchar(x + 48);

	if (x != 9)
{
	putchar(',');
	putchar(' ');
}
	x++;
}

	putchar('\n');
	return (0);
}
