#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the set of bytes to search for
 *
 * Return: pointer to the first occurrence in the string @s of any of the
 * bytes in the string @accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *p = accept;
while (*p != '\0')
{
if (*p == *s)
{
return (s);
}
p++;
}
s++;
}
return (NULL);
}
