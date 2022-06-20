/**
 * _memset - fills memory with constant byte
 * @s: pointer to be returned
 * @b: char
 * @n: no of bytes
 * Return: pointer to a character
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i = 0;
        char *rt = s;

        while (i < n)
        {
                *rt++ = b;
                i++;
        }
        return (rt++);
}
