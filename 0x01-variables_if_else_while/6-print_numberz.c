#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Printing single digit using char
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
