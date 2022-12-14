<<<<<<< HEAD
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
=======
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

		return (0);
}
>>>>>>> 5684746eab8824f5b23e15df20d9d265cdc79a7e
