#include <stdio.h>
/**
 * main-prints a combination of numbers
 * Return: always success
 */
int main(void)
{
	int c, i;
	
	for (c = '0'; c <= '9'; c++);
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(' ');

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
