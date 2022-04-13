#include <unistd.h>
/**
*putchar writes the character c to stdout
*c: char to print
*return: 1 if successful
*return: -1 if  error occurs
*/
int _putchar(char c)
{
  return (write(1, &c, 1));
}
