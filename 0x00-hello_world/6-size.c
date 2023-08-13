#include<stdio.h>
/*
 * main - prints the size of various types on the computer it is compiled and
 * run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a longint: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a longlong int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
