#include "main.h"
/**
*_isalpha - check character
*@c: the character
*Return: 1 for lowercase character. 0 for the rest
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
