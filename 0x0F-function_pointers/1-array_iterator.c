#include "function_pointers.h"
/**
 * array_iterator - prints the size of an array
 * @array: array to be printed
 * @size: Size of the array items to be printed
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
