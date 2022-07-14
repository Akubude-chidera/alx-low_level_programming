#include "main.h"
#include <sttring.h>

/**
 * _strncat - function that concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * @n: length of int
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
