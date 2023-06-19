#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing base 16 with putchar
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 0;
	char y = 'a';

	while (x <= 9)
{
	putchar(x + 48);
	x++;
}
	while (y <= 'f')
{
	putchar(y);
	y++;
}
	putchar('\n');
	return (0);
}
