#include "main.h"
/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: len
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
