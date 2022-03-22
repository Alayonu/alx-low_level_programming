#include "main.h"
/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function as in the quiz
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 0;
int length = 0;

for (length = 0; s[length] != '\0'; length++)
{
}
for (i = length - 1; i >= 0; i--)
{
_puchar(s[i]);
}
_putchar('\n');
}
