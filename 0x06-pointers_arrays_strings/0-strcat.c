#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest: This is the output dest
 * @src: This is the input source
 * Return: This return to dest, that concatenates two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
