#include <unistd.h>

/**
 * _putchar - writes the characterc to stdout
 * @c: The character to print
 *
 * Return: On Success1.
 * On error, -1 is returned, and error is set appropriately.
 *
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
