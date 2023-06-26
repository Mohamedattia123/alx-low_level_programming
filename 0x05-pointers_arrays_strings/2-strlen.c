#include "main.h"

/**
 * _strlen - length of the string
 *
 * @s: input for string length
 *
 * Return: (counter)
*/
int _strlen(char *s)
{
int counter;

for (counter = 0; *s != '\0'; s++)
	counter++;
	return (counter);


}
