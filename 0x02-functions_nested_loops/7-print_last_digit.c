/**
*print_last_digit - last digit of a number
*@n : imput
*Return: the value of the last digit
*/
int print_last_digit(int n)
{

int l;

l = n % 10;
if (l < 0)
{
_putchar(-l);
return (-l);
}
else
{
_putchar(l);
return (l);
}
}
