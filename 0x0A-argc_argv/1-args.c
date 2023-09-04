#include <stdio.h>

/**
 * main - prints the number of parameters
 * @argc: argument count
 * @argv: argumeunt vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
