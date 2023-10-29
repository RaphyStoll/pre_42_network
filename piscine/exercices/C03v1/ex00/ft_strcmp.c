#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int count = 0;
    while (s1[count] != '\0' || s2[count] != '\0')
    {
        if (s1[count] != s2[count])
            return (s1[count] - s2[count]);
        count++;
    }
    return 0;
}
int main()
{
    char s1[] = "ABcB", s2[] = "abcd", s3[] = "ABCB", s4[] = "ABcBABaa";

    printf("ft_strcmp s1,s2  %d\n", ft_strcmp(s1, s2));
    printf("strcmp s1,s2  %d\n\n", strcmp(s1, s2));
    printf("ft_strcmp s1,s4  %d\n", ft_strcmp(s1, s4));
    printf("strcmp s1,s4  %d\nn", strcmp(s1, s4));
    printf("ft_strcmp s2,s2  %d\n", ft_strcmp(s2, s2));
    printf("strcmp s2,s2  %d\n\n", strcmp(s2, s2));
    printf("ft_strcmp s2,s3  %d\n", ft_strcmp(s2, s3));
    printf("strcmp s2,s3  %d\n", strcmp(s2, s3));
}