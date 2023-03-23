#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name string to print
 * @f: pointer to the function that will print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

