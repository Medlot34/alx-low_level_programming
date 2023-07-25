#include "main.h"
#include <stdio.h>
/**
*main - Fizz-Buzz test
*prints the numbers from 1 to 100, followed by a new line
*Return: always 0
*/

int main(void)
{

int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}
