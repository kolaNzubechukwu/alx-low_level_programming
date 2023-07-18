#include "main.h"
/**
 * _islower - checks if in lowercase
 * @c: the charactr to check
 * Return: 0 if false 1 fi true
 */
int _islower(int c)
{
	int i, prog;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			prog = 1;
		}
		else if ((i - 32) == c)
		{
			prog = 0;
		}
	}
	return (prog);
}

