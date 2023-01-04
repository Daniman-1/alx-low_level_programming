#include "main.h"

/**
 * str_checker - checks if two strings are identical
 * @s1: string_1
 * @s2: string_2
 * @i: left index
 * @j: special index
 * Return: 1 if s is palindrome, or 0 if not
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - checks if strings can be considered identical
 * @s1: string_1
 * @s2: string_2
 * Return: 1 if strings are considered identical, or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
