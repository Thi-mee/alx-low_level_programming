#include "3-calc.h"

/**
 * main - simple calculator
 * @argc: number of arguments
 * @argv[]: argument vector
 * Return: an integer
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
	if ((*operator != '+') && (*operator != '-') && (*operator != '*') \
	&& (*operator != '/') && (*operator != '%'))
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
