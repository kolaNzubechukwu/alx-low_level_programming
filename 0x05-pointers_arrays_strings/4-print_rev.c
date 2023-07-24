#include <stdio.h>
#include "main.h"
int _strlen(char *str);
/**
 * print_rev - prints string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int g = (_strlen(s) - 1);
	int y;

	for (y = g; s[y] != '\0'; y--)
	{
		printf("%c", s[y]);
	}
	putchar('\n');
}
/**
 * _strlen - finds the string length of str
 * @str: string to find lenght
 * Return: i always
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
