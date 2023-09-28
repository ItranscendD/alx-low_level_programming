#include "main.h"
#include <unistd.h>
/**
 * _putchar - this will write the character c to stdout
 * @c: printed character
 *
 * Return: This will be 1 if succesful.
 * -1 is returned, on error while errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
