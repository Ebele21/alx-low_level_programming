#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
if (!*needle)
return (haystack);
for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
for (j = 1; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
break;
}
(!needle[j]);
return (haystack + i);
}
}
return (NULL);
}

