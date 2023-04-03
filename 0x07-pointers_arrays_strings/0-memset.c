#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n-- > 0)
{
*ptr++ = b;
}
return (s);
}
