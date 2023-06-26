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
	int longi = 0;

while (*s != '\0')
{
	++longi;
	s++;
}
	return (longi);


}
