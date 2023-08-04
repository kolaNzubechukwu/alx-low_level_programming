#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vctor
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	while (*argv[argc] != '\0')
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
