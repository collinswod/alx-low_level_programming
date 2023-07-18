#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ptr_ar;
	int i;

	if (min > max)
		return (NULL);

	ptr_ar = malloc(sizeof(*ptr_ar) * ((max - min) + 1));

	if (ptr_ar == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr_ar[i] = min;
		i++;
		min++;
	}
	return (ptr_ar);
}
