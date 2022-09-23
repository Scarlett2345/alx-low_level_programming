#include "main.h"

/**
 * *_strncat - This function concatenates two strings
 * but uses, at most, n bytes from src, and src does not need to be
 * null-terminated if it contains n or more bytes
 * @src: The string to append to dest
 * @dest: The string to concatenate with src
 * @n: The number of bytes to append
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
   //while dest exists and isn't null terminator yet
   while (*dest)
       dest++;
   // replace dest while src exists and insert nulls till n bytes
   for (i = 0; i < n; i++)
   {
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
   }
}
