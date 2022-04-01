#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplys 2 numbers
 * @argc: number of arguments passed
 * @argv: string array of arguemnts
 * Return: 0 otherwise 1 if Error
 */
int main(int argc, char *argv[])
{
	int i;
	int prod = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	return (0);
}
