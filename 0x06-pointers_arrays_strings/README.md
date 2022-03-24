1. Write a function that concatenates two strings.

	-Prototype: char *_strcat(char *dest, char *src);
	-This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	-Returns a pointer to the resulting string dest

		#include<stdio.h>
		/**
		 * A function that concatenates two strings
		 * 
		 * Always return 0
		 * 
		 */

		char *_strcat(char *dest,char *src)
		{
		  len_dest=strlen(dest);
		  for(let i=0;i<strlen(src);i++)
		  {
		    dest[len_dest+i]=src[i];
		  }
		  return(dest);
		}
