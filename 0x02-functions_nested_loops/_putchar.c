#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD
int _putchar(char c)
=======
<<<<<<< HEAD
int  _putchar(char *c)
=======
int _putchar(char c)
>>>>>>> f64e52fd4f40c49041e42f64846c2f3941a119c3
>>>>>>> 0fed5f6532e46d3b108810091c8c1c928a78eb46
{
  return (write(1, &c, 1));
}
