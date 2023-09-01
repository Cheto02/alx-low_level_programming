#include <stdio.h>

/**
 * main -program entry point.
 * @argc: argument count integer
 * @argv: argument vector array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("No program name provided.\n");
	}
		return (0);
}

