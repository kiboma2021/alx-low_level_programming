1. Write a function that concatenates two strings.

	-Prototype: char *_strcat(char *dest, char *src);
	-This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	-Returns a pointer to the resulting string dest

		#include "main.h"

		/**
		 * _strcat - appends src string to dest string
		 * @dest: destination string
		 * @src: source string
		 * Return: result of concatenation in string form
		 */
		char *_strcat(char *dest, char *src)
		{
			int len = strlen(dest);
			unsigned int i;

			for (i = 0; i < strlen(src); i++)
				dest[len + i] = src[i];

			return (dest);
		}


2. Write a function that concatenates two strings.

	-Prototype: char *_strncat(char *dest, char *src, int n);
	-The _strncat function is similar to the _strcat function, except that
	it will use at most n bytes from src; and
	-src does not need to be null-terminated if it contains n or more bytes
	-Return a pointer to the resulting string dest


	#include "main.h"

	/**
	 * _strncat - concatenates src to dest while using at most n bytes
	 * @dest: destination string
	 * @src: source string
	 * @n: max number of bytes from src
	 * Return: concatenated string
	 */
	char *_strncat(char *dest, char *src, int n)
	{
		int len = strlen(dest), i;

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[len + i] = src[i];

		return (dest);
	}



3. Write a function that copies a string.

	-Prototype: char *_strncpy(char *dest, char *src, int n);
	-Your function should work exactly like strncpy

	#include "main.h"

	/**
	 * _strncpy - copies a string
	 * @dest: destination string
	 * @src: source string
	 * @n: number of bytes to copy
	 *
	 * Return: pointer to the resulting string
	 */
	char *_strncpy(char *dest, char *src, int n)
	{
		int i;

		i = 0;

		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}

		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}

		return (dest);
	}


4. Write a function that compares two strings.

	-Prototype: int _strcmp(char *s1, char *s2);
	-Your function should work exactly like strcmp


	#include "main.h"
	#include <stdio.h>
	/**
	  * _strcmp - compare strings
	  * @s1: para1
	  * @s2: para2
	  * Return: int
	  */
	int _strcmp(char *s1, char *s2)
	{
		int i;

		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		return (0);
	}

















