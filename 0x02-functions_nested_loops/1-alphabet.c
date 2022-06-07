#include <stdio.h>

/**
 * print_alphabet - Check description
 * Description: It prints all lower case alphabets.
 * Return: void.
 */
void print_alphabet(void)
{
	char art;
	
	for (art = 'a'; art <= 'z'; art++)
	{
		putchar(art);
	}
		putchar('\n');
}

/**
 * main - Check description
 * Description: It prints the word "_putchar", followed by a new line.
 * Return: 0.
 */
int main(void)
{

	print_alphabet();
	return (0);

}

