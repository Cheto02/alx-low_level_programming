#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
unsigned int mul(unsigned int num1, unsigned int num2);
#endif
