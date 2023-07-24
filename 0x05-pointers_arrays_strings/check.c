#include <stdio.h>
int _strlen(char *str);
/**
 * print_rev - prints string in reverse
 * @s string to print
 */
void print_rev(char *s)
{
        int g = (_strlen(s) - 1);
        int y;
        printf("g: %d\n", g);

      for (y = g; s[y] != '\0'; y--)
        {
                printf("%c", s[y]);
                y--;
        }
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

int main() {
    
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    // Write C code here
    printf("Hello world");

    return 0;
}
