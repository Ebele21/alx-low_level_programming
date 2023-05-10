#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - check if string is palindrome
 * @s: input string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
return (is_palindrome_helper(s, 0, strlen(s) - 1));
}
