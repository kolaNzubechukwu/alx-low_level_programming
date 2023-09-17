#include <stdio.h>
/**
 * _memset - chances what is in memory
 * @s: array to be changed
 * @b:what the array should be changed into
 * @n: number of element to be changed i s
 * Return: s always
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, y = 0;
	int r = n - 1;

	while (s[y] != '\0')
		y++;

	for (i = 0; i <= r; i++)
	{
		s[i] = b;
	}

	s[y] = '\0';
	return (s);
}
