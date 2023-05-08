#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to search
 * @c: The character to search for
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
