/**
 * Author: Thimee
 */

/**
 * _puts_recursion - prints out string
 * with recursion
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(*(s+1);
}
