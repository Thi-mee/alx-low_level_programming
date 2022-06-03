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
	{
		if (act == 'e' || act == 'q')
			continue;
		else
			putchar(act);
	}
	putchar('\n');
	return (0);

}
