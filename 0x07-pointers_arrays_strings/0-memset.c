#include<stdio.h>
#include "main.h"
/**
 *Main - function that fills with a constant byte
 *
 *Prototype: char *_memset(char *s,char b,unsigned int n)
 *
 *@s: Memory area to be filled
 *@b:char to copy
 *@n:Number of times to copy
 *
 *Return- Pointer to the memory area S
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
