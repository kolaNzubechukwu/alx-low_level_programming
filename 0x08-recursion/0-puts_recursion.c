#include "main.h"
/**
 * _puts_recursion - entry point
 * @s: variable
 */


void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}

