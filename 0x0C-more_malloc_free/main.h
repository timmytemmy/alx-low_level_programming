#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdio.h>


void *malloc_checked(unsigned int b);
char *string_noncat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


#endif