#include <unistd.h>

void ft_putchar(int c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if ( nb <= -2147483648)
    write(1, "-2147483648", 11);
    if(nb < 0)
    {
    ft_putchar('-');
    nb =- nb;
    }
    if(nb <= 9)
    {
        ft_putchar(nb + 48);
    }
    if (nb > 9)
    {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
    }
}

int main()
{
    ft_putnbr(5);
    write(1, "\n", 1);
    ft_putnbr(122345);
    write(1, "\n", 1);
    ft_putnbr(-15657);
    write(1, "\n", 1);
    ft_putnbr(9);
    write(1, "\n", 1);
    ft_putnbr(10);
}