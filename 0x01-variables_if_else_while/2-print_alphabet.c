#include <stdio.h>
/**
*main -Entry point
*Discription : 'check for number'
*Return: always 0
*/
int main(void)
{
	int n = 97;

	while (n <= 127)
	{
		putchar (n);
		n++;
	}
	putchar('\n');
	return (0);
}
