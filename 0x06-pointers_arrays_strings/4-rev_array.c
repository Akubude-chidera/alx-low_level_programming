#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty.
 */

void reverse_array(int *a, int n)
{
	int *b, j, aux, k;

	b = a;

	for (j = 0; j < n; j++)
		b++;

	for (k = 0; k < j / 2; k++)
	{
		aux = a[k];
		a[k] = *b;
		*b = aux;
		b--;
	}
}
