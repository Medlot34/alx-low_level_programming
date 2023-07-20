/**
*print_last_digit - last digit of a number
*@n : imput
*Return: the value of the last digit
*/
int print_last_digit(int)
{

int l;
int n;

l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
