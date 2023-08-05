#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - prints the length of a string
 *@s: string to work on
 * Return: i always
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
