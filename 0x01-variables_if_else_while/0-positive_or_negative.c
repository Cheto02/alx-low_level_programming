/* 
* This is a preprocessor directive that tells the compiler to include the
* header file stdio.h, which contains the standard input/output
* functions such as printf and scanf.
*/
#include <stdio.h>
/*
* This is another preprocessor directive that tells the compiler to include 
* the header file time.h, which contains the functions and types for 
* manipulating time and date such as time and srand.
*/
#include <time.h>
/* 
* This is yet another preprocessor directive that tells the compiler to
* include the header file stdlib.h, which contains the functions for memory
* allocation, random number generation, and other utility functions such as
* rand and exit.
*/
#include <stdlib.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
// This is a comment that describes the main function, which is the entry point of any C program. The main function takes no arguments (void) and returns an integer value (int).
int main(void)
{	// This is the start of the main function body.

        // This declares an integer variable named n, which will store the random number generated later
	int n;
	// This calls the srand function with the argument time(0), which sets the seed for the random number generator based on the current time.
	// This ensures that different random numbers are generated each time the program runs.
	srand(time(0));
	// This assigns a random number to n by calling the rand function, which returns an integer between 0 and RAND_MAX (a constant defined in stdlib.h
	// )/To make n range from -RAND_MAX/2 to RAND_MAX/2, we subtract RAND_MAX/2 from rand().
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

