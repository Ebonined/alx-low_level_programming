#ifndef _FUNC_POINTER_
#define _FUNC_POINTER_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
