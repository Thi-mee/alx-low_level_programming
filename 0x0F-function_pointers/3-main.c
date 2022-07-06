#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument vector
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y, ans;
	char *operator;
	int (*fp)(int, int);

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (((*operator == '/') || (*operator == '%')) && (y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	fp = get_op_func(operator);
	ans = fp(x, y);
	printf("%d\n", ans);
	return (0);
}
