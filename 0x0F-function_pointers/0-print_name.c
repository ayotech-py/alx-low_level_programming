#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints the name
 * @name: name to be printed
 * @f: function pointers
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
