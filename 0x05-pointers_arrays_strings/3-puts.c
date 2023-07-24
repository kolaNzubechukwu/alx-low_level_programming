#include <stdio.h>
/**
 * _puts - print a string inputed to stdo
 * standard out put
 * @str: the string to output
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
