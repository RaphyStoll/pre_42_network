#include <unistd.h>

void ft_putchar(int c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;

    if (n == 1)
    {
        while (a <= 9)
        {
            ft_putchar(a + 48);
            if (a != 9)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            a++;
        }
    }

    if (n == 2)
    {
        while (a <= 8)
        {
            b = a + 1;
            while (b <= 9)
            {
                ft_putchar(a + 48);
                ft_putchar(b + 48);
                if (a != 8 || b != 9)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                b++;
            }
            a++;
        }
        ft_putchar('\n');
    }

    if (n == 3)
    {
        while (a <= 7)
        {
            b = a + 1;
            while (b <= 8)
            {
                c = b + 1;
                while (c <= 9)
                {
                    ft_putchar(a + 48);
                    ft_putchar(b + 48);
                    ft_putchar(c + 48);
                    if (a != 7 || b != 8 || c != 9)
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
        ft_putchar('\n');
    }

    if (n == 4)
    {
        while (a <= 6)
        {
            b = a + 1;
            while (b <= 7)
            {
                c = b + 1;
                while (c <= 8)
                {
                    d = c + 1;
                    while (d <= 9)
                    {
                        ft_putchar(a + 48);
                        ft_putchar(b + 48);
                        ft_putchar(c + 48);
                        ft_putchar(d + 48);
                        if (a != 6 || b != 7 || c != 8 || d != 9)
                        {
                            ft_putchar(',');
                            ft_putchar(' ');
                        }
                        d++;
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
        ft_putchar('\n');
    }

    if (n == 5)
    {
        while (a <= 5)
        {
            b = a + 1;
            while (b <= 6)
            {
                c = b + 1;
                while (c <= 7)
                {
                    d = c + 1;
                    while (d <= 8)
                    {
                        e = d + 1;
                        while (e <= 9)
                        {
                            ft_putchar(a + 48);
                            ft_putchar(b + 48);
                            ft_putchar(c + 48);
                            ft_putchar(d + 48);
                            ft_putchar(e + 48);
                            if (a != 5 || b != 6 || c != 7 || d != 8 || e != 9)
                            {
                                ft_putchar(',');
                                ft_putchar(' ');
                            }
                            e++;
                        }
                        d++;
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
        ft_putchar('\n');
    }
    if (n == 6)
    {
        while (a <= 4)
        {
            b = a + 1;
            while (b <= 5)
            {
                c = b + 1;
                while (c <= 6)
                {
                    d = c + 1;
                    while (d <= 7)
                    {
                        e = d + 1;
                        while (e <= 8)
                        {
                            f = e + 1;
                            while (f <= 9)
                            {
                                ft_putchar(a + 48);
                                ft_putchar(b + 48);
                                ft_putchar(c + 48);
                                ft_putchar(d + 48);
                                ft_putchar(e + 48);
                                ft_putchar(f + 48);
                                if (a != 4 || b != 5 || c != 6 || d != 7 || e != 8 || f != 9)
                                {
                                    ft_putchar(',');
                                    ft_putchar(' ');
                                }
                                f++;
                            }
                            e++;
                        }
                        d++;
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
        ft_putchar('\n');
    }
    if (n == 7)
    {
        while (a <= 3)
        {
            b = a + 1;
            while (b <= 4)
            {
                c = b + 1;
                while (c <= 5)
                {
                    d = c + 1;
                    while (d <= 6)
                    {
                        e = d + 1;
                        while (e <= 7)
                        {
                            f = e + 1;
                            while (f <= 8)
                            {
                                g = f + 1;
                                while (g <= 9)
                                {
                                    ft_putchar(a + 48);
                                    ft_putchar(b + 48);
                                    ft_putchar(c + 48);
                                    ft_putchar(d + 48);
                                    ft_putchar(e + 48);
                                    ft_putchar(f + 48);
                                    ft_putchar(g + 48);
                                    if (a != 3 || b != 4 || c != 5 || d != 6 || e != 7 || f != 8 || g != 9)
                                    {
                                        ft_putchar(',');
                                        ft_putchar(' ');
                                    }
                                    g++;
                                }
                                f++;
                            }
                            e++;
                        }
                        d++;
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
        ft_putchar('\n');
    }

    if (n == 8)
    {
        while (a <= 2)
        {
            b = a + 1;
            while (b <= 3)
            {
                c = b + 1;
                while (c <= 4)
                {
                    d = c + 1;
                    while (d <= 5)
                    {
                        e = d + 1;
                        while (e <= 6)
                        {
                            f = e + 1;
                            while (f <= 7)
                            {
                                g = f + 1;
                                while (g <= 8)
                                {
                                    h = g + 1;
                                    while (h <= 9)
                                    {
                                        ft_putchar(a + 48);
                                        ft_putchar(b + 48);
                                        ft_putchar(c + 48);
                                        ft_putchar(d + 48);
                                        ft_putchar(e + 48);
                                        ft_putchar(f + 48);
                                        ft_putchar(g + 48);
                                        ft_putchar(h + 48);
                                        if (a != 2 || b != 3 || c != 4 || d != 5 || e != 6 || f != 7 || g != 8 || h != 9)
                                        {
                                            ft_putchar(',');
                                            ft_putchar(' ');
                                        }
                                        h++;
                                    }
                                    g++;
                                }
                                f++;
                            }
                            e++;
                        }
                        d++;
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
        ft_putchar('\n');
    }

    if (n == 9)
    {
        while (a <= 1)
        {
            b = a + 1;
            while (b <= 2)
            {
                c = b + 1;
                while (c <= 3)
                {
                    d = c + 1;
                    while (d <= 4)
                    {
                        e = d + 1;
                        while (e <= 5)
                        {
                            f = e + 1;
                            while (f <= 6)
                            {
                                g = f + 1;
                                while (g <= 7)
                                {
                                    h = g + 1;
                                    while (h <= 8)
                                    {
                                        i = h + 1;
                                        while (i <= 9)
                                        {
                                            ft_putchar(a + 48);
                                            ft_putchar(b + 48);
                                            ft_putchar(c + 48);
                                            ft_putchar(d + 48);
                                            ft_putchar(e + 48);
                                            ft_putchar(f + 48);
                                            ft_putchar(g + 48);
                                            ft_putchar(h + 48);
                                            ft_putchar(i + 48);
                                            if (a != 1 || b != 2 || c != 3 || d != 4 || e != 5 || f != 6 || g != 7 || h != 8 || i != 9)
                                            {
                                                ft_putchar(',');
                                                ft_putchar(' ');
                                            }
                                            i++;
                                        }
                                        h++;
                                    }
                                    g++;
                                }
                                f++;
                            }
                            e++;
                        }
                        d++;
                    }
                    c++;
                }
                b++;
            }
            a++;
        }
    }
    ft_putchar('\n');
}

int main()
{
    write(1, "---1---", 7);
    write(1, "\n", 1);
    ft_print_combn(1);
    write(1, "\n", 1);

    write(1, "---2---", 7);
    write(1, "\n", 1);
    ft_print_combn(2);
    write(1, "\n", 1);

    write(1, "---3---", 7);
    write(1, "\n", 1);
    ft_print_combn(3);
    write(1, "\n", 1);

    write(1, "---4---", 7);
    write(1, "\n", 1);
    ft_print_combn(4);
    write(1, "\n", 1);

    write(1, "---5---", 7);
    write(1, "\n", 1);
    ft_print_combn(5);
    write(1, "\n", 1);

    write(1, "---6---", 7);
    write(1, "\n", 1);
    ft_print_combn(6);
    write(1, "\n", 1);

    write(1, "---7---", 7);
    write(1, "\n", 1);
    ft_print_combn(7);
    write(1, "\n", 1);

    write(1, "---8---", 7);
    write(1, "\n", 1);
    ft_print_combn(8);
    write(1, "\n", 1);

    write(1, "---9---", 7);
    write(1, "\n", 1);
    ft_print_combn(9);
    write(1, "\n", 1);
}