int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ('a' <= str[i] && str[i] <= 'z')
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
    char a[] = "";
    return(ft_str_is_lowercase(a));
}