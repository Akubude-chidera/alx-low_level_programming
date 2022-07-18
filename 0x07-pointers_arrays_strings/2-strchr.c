#include "main.h"

/**
* _strchr -> string character
* @s: string param
* @c: occurrence of character
* Return: a string
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

