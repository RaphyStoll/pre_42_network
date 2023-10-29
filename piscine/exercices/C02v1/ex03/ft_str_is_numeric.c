int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ('0' <= str[i] && str[i] <= '9')
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
    char a[] = "6";
    return(ft_str_is_numeric(a));
}