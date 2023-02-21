#include "main.h"
#include <unistd.h>
/**
 * main - Print _putchar followed by a new line.
 *
 * Return: Always 1 (Success)
 * With error, -1 is returned, and an errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
