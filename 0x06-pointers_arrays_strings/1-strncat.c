#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: This is destination value
  * @src: This is  source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */


char *_strncat(char *dest, char *src, int n)
{
	int j = 0, dlen = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

