#include <unistd.h>
/**
 * _putcgar -writes the cgaracter c 
 * @c: the character print
 *
 * Return: on success 1
 * on error-1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
#include <unistd.h>
	/**
	 * _putchar - writes the character c to
	 * @c: The character to print
	 * Return: on success
	 * on error, -1 is returned
	 */
	int _putchar(char c)
	{
		return (write(1, &c, 1)); 
	}
}
