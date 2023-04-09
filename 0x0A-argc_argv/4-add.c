#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int i, n, sum;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (!n)
		{
			printf("Error\n");
			return (1);
		}

		sum += n;
	}

	printf("%d\n", sum);
	return (0);
}
