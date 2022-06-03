#include <stdio.h>

/**
* main - Entry point;
*
* Return: Always 0 (success)
*/
int main(void)
{
	int num;
	char apt;
	char convertedInt;

	for (num = 0; num <= 16; num++)
	{
		convertedInt = num + '0';
		putchar(convertedInt);
	}
	for (apt = "a"; apt <= 'f'; apt++)
		putchar(apt);
	putchar('\n');
	return (0);

}
