#include "main.h"
/**
 * print_alphabet_x10 - prints abc 10 x10
 *
 */
void print_alphabet_x10(void)
{
	int g, i;

	for (g = 1; g <= 10; g++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
}
