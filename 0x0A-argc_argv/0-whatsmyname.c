#Include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])a
{
	UNUSED(argc);

	printf("%s\n", argv[0]);
	return (0);
}
