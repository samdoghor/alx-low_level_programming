#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - this fuction allocates memory using malloc
 * @b: number of bytes to be  allocate
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}

