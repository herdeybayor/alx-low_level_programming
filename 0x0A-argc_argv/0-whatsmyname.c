#include <stdio.h>
#include "main.h"

/**
 * main - prints the current program name
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
