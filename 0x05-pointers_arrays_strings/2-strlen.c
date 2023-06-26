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
	int counter = 0;

while (*s != '\0')
{
	++counter;
	s++;
}
	return (counter);


}
