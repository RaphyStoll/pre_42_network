int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (32 <= str[i] && str[i] <= 127)
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
    char a[] = "2";
    return(ft_str_is_uppercase(a));
}