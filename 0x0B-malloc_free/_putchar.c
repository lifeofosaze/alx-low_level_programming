#include <unistd.h>

/**
 * _putchar - writes the t
 *
 * Return: On success 1.
 * On error, -1 is rcharacter c to stdout
 * @c: The character to prineturned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
