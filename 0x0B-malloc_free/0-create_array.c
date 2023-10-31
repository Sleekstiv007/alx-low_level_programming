#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars dynamically
 * @size: size of the array
 * @c: the string
 * Return: 0 means success except defined otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*allocates memory for the array*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		/*initialize the array*/
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}
