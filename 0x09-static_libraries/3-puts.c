#include<stdio.h>

void _puts(char *str);

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}

/**
* _puts - prints a string to stdout
* @str: the string to print
*/
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
