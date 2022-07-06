#include "3-calc.h"

/**
 * get_op_func - returns pointer to function
 * @s: operator
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int){
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
