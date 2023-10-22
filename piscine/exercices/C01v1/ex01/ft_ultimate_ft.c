#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
	int u;
	int* pu;
	int** pu2;
	int*** pu3;
	int**** pu4;
	int***** pu5;
	int****** pu6;
	int******* pu7;
	int******** pu8;
	int********* pu9;

	pu = &u;
	pu2 = &pu;
	pu3 = &pu2;
	pu4 = &pu3;
	pu5 = &pu4;
	pu6 = &pu5;
	pu7 = &pu6;
	pu8 = &pu7;
	pu9 = &pu8;
	ft_ultimate_ft(pu9);
	printf("%d",u);
}