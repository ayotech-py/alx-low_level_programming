#include "function_pointers.h"
/**
 * print_name - Prints the name
 * @name: name to be printed
 * @f: function pointers
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
