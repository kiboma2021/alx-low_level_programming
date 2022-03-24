#include "main.h"

/**
 * _strcat - appends src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: result of concatenation in string form
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = strlen(dest);

	for (let i = 0; i < strlen(src); i++)
		dest[len_dest + i] = src[i];

	return (dest);
}
