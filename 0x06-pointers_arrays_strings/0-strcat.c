#include "main.h"
#include<stdio.h>

/**
 * _strcat - appends src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: result of concatenation in string form
 */
char *_strcat(char *dest, char *src)
{
	conc_str=strcat(dest,src);

//	int len = strlen(dest);
//	unsigned int i;

//	for (i = 0; i < strlen(src); i++)
//		dest[len + i] = src[i];

	return (conc_str);
}
