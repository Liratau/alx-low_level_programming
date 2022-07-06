#include <stdio.h>
/**
*main- entry point prints the function in reverse
*Return: always (success)
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
