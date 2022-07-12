#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 **/
void rev_string(char *s)
{
int i;
char t;

for (i = 0; i < _strlen(s) / 2; i++)
{
	t = s[i];
	s[i] = s[_strlen(s) - i - 1];
	s[_strlen(s) - i - 1] = t;
}
}
