#include <stdio.h>

/**
* main - Entry point;
*
* Return: Always 0 (success)
*/
int main(void)
{
	int num;
	int converted_num;

	for (num = 0; num <= 9; num++)
	{
		converted_num = num + '0';
		putchar(num);
	}
	putchar('\n');
	return (0);

}
