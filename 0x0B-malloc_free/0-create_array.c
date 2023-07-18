#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptrcr;
	unsigned int j;

	if (size == 0)
		return (NULL);

	ptrcr = malloc(sizeof(c) * size);

	if (ptrcr == NULL)
		return (NULL);

	j = 0;
while (j <  size)
{
ptrcr[j] = c;
j++;
}
return (ptrcr);
}
