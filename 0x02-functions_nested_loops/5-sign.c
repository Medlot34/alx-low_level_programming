#include "main.h"
/**
*print_sign - check number
*@n: the number
*Return: 1 for positif number. 0 for zero number. -1 for negatif number
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
