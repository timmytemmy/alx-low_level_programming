#include "3-calc.h"

/**
 * main - prints the result of simple operations.
 * @argc: argument count
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *rate;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	rate = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(rate) == NULL || rate[1] != '\0')
	{
		printf("Error\n");
	}

	if ((*rate == '/' && num2 == 0) || (*rate == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
