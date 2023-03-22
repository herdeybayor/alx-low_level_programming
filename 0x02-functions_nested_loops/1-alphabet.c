#include "main.h"

/**
 * Print_alphabet - Entry point
 * Description - Prints alphabets in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
