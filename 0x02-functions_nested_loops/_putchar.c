#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD
int  _putchar(char *c)
=======
int _putchar(char c)
>>>>>>> f64e52fd4f40c49041e42f64846c2f3941a119c3
{
  return (write(1, &c, 1));
}
