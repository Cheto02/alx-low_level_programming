#include <stdlib.h>
#include <string.h>
/**
 * main- program entry point
 * _memset- fill the first n bytes of the memory area pointed to
 * @n: bytes of the memory area
 * @b: the constant byte
 * @s: memory area
 * Return: ptr
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n;)
	{
		*s = b;
		s++;
		i++;
	}
	return (ptr);
}
int main(void)
{
	char str[20] = "Hello, World!";
	unsigned int n = 7;

	printf("Before memset: %s\n", str);
	_memset(str, 'b', n);
	printf("After memset: %s\n", str);
	return (0);
}
