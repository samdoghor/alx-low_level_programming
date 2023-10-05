#include "main.h"
#include <stdlib.h>

/**
 * create_array - prints a string
 * @size: number of element in the array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/* value with malloc */

	buff = (char *) malloc(size * sizeof(c));

	if (buff == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;

		while (position < size)
		{
			*(buff + position) = c;
			position++;
		}
		return (buff);
	}
}

