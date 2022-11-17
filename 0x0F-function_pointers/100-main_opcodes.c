#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int index, bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	index = atoi(argv[1]);

	if (index < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	for (bytes = 0; bytes < index; bytes++)
	{
		if (bytes == index - 1)
		{
			printf("%02hhx\n", array[bytes]);
			break;
		}
		printf("%02hhx ", array[bytes]);
	}
	return (0);
}
