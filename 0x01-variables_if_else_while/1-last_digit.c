#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - docs goes here
 *
 * Return: 0 Always
 */

int main(void)
{
	int n;
	int l;
	char str[23];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;
	if (l > 5)
		strcpy(str, "greater than 5");
	else if (l < 6 && l != 0)
		strcpy(str, "less than 6 and not 0");
	else
		strcpy(str, "0");

	printf("Last digit of %d is %d and is %s\n", n, l, str);

	return (0);
}
