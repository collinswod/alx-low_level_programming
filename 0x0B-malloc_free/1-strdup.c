#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int l, j;

	if (str == NULL)
		return (NULL);

	l = 0;
while (str[l] != '\0')
{
l++;
}
strout = (char *)malloc(sizeof(char) * (l + 1));
if (strout == NULL)
return (NULL);
j = 0;
while (j < l)
{
strout[j] = str[j];
j++;
}
return (strout);
}
