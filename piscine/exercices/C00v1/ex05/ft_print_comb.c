#include <unistd.h>

void ft_putchard(int c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int a = 0;
    int b;
    int c;

    while(a <= 7)
    {
        b = a + 1; 
        while(b <= 8)
        {
            c = b + 1;
            while(c <= 9)
            {
                ft_putchard(a + 48);
                ft_putchard(b + 48);
                ft_putchard(c + 48);
                if (a != 7 || b != 8 || c != 9)
                {
                    ft_putchard(',');
                    ft_putchard(' ');
                }
                c++;
            }
            b++;
        } 
        a++;
    }
    ft_putchard('\n');
}

int main()
{
    ft_print_comb();
}