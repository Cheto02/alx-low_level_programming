#include <stdio.h>

/**
 * pre_main - Function to print before the main function is executed.
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/* To print something before the main function is executed, you can use */
/* the __attribute__((constructor)) feature in C. Functions with this */
/* attribute will be executed before main.*/
