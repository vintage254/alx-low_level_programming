#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_
#include<stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif 
