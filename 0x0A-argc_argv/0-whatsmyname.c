#include <stdio.h>
#include "main.h"

/**
 * print_name - prints the current program name
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
