#include "main.h"
/**
*_islower - check character
*@c: the character
*Return: 1 for lowercase character. 0 for the rest
*/
void _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
