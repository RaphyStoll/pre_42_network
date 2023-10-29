int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[] = "b";
    return(ft_str_is_alpha(a));
}