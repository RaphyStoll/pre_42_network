#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{

	int nbr = 0;
	ft_ft(&nbr);
	printf("%d", nbr);
	return 0;
}