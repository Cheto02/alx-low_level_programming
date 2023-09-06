#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;// variable to store the number of matching characters
	int r; // loop counter

	while (*s)// iterate over each character in string s
	{
	for (r = 0; accept[r]; r++)//iterate over each character in string accept
	{
	if (*s == accept[r])//if the current character in s matches the current
		//character in accept
	{
	n++;// increment the count of matching characters
	break;// break out of the inner loop
            }
	}
	else if (accept[r + 1] == '\0')// if we have reached the end of string
		//accept without finding a match
	return (n);//return the count of matching characters
	}
	s++;// move to the next character in string s
	}
	return (n);// return the count of matching characters
}

