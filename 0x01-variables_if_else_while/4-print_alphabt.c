#include <stdio.h>

/**
 * main - docs goes here
 *
 * Return: 0 Always
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'q' || l == 'e')
			continue;
		putchar(l);
	}

	putchar('\n');
	return (0);
}
