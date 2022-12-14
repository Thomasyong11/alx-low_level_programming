#include "main.h"
/**
 * main - Prints _putchar as a message.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh);
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
