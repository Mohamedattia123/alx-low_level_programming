#include <stdio.h>
#include "main.h"
/**
 * main - print program name followed by new line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:  return always 0 (success)
*/



	int main(int argc, char **argv)
{

	printf("%s\n", *argv);

	return (0);
}
