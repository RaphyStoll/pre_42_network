#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int tab[], int size)
{
	int i;
	int swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				ft_swap(&tab[i - 1], &tab[i]);
				swapped = 1;
			}
			i++;
		}
	}
}

int		main(void)
{
	int tab[] = {5, 2, 9, 1, 5, 6};
	int size = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, size);

	printf("Tableau trié : ");
	int i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	return (0);
}
