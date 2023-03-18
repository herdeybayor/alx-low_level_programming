#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - docs goes here
 *
 * Return: 0 Always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	return (0);
}
