#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint = converts a binary number to an unsigned int
 * @b: char string
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
	unsigned int bit = 1;

	if (b == NULL)
		return (0);

	if (int i = 0; b[i] != '\0'; i++) {
		if (b[i] == '1')
			result += bit;
		else if (b[i] != '0')
			return (0);
		bit <<= 1;
	}

	return (result);
}
