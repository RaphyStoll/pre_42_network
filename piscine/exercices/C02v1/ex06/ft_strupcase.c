
#include <unistd.h>

void ft_putchard(char a)
{
    write(1, &a, 1);
}

char *ft_strupcase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ('A' <= str[i] && str[i] < 'Z')
            str[i] += 32;
        ft_putchard(str[i]);
        i++;
    }
    return str;
}
int main()
{
    char a[] = "MAJ min --- BonJoUr A ToUs C'eSt DaVId LA FarJPoKemon";
    ft_strupcase(a);
}