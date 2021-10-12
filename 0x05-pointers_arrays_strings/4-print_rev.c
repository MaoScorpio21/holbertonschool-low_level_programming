#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 *             followed by a new line
 *
 * @s: string entering
 * Return: Always 0. (sucess)
 */

void print_rev(char *s)
{
	int n, m;

	for (n = 0; s[n] != '\0'; n++)
	{
		m = n;
	}
	for (; s[m] != '\0'; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
