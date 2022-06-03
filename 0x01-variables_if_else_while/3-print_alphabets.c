#include <stdio.h>

/**
* main - Entry point;
*
* Return: Always 0 (success)
*/
int main(void)
{
	char act;

	for (act = 'a'; act <= 'z'; act++)
	putchar(act);
	for (act = 'A'; act <= 'Z'; act++)
	putchar(act);
	putchar('\n');
	return (0);

}
