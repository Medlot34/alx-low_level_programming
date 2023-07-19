#include "main.h"
/**
*print_alphabet_x10  - print_alphabet_x10
*
*Return: always 0 (succus)
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
