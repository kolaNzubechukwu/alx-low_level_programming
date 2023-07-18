#include "main.h"
/**
 * _islower - checks if in lowercase
 *
 * Return: 0 if false 1 fi true
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else if ((i - 32) == c)
		{
			return (0);
		}
	}
}
