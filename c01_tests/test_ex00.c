#include <stdio.h>
#include "../../c01/ex00/ft_ft.c"

int	main(void)
{
	int 	i;
	int*	nbr;

	i = 21;
	printf("c01 ex00\n");
	printf("Before: %d\n", i);

	nbr = &i;
	ft_ft(nbr);

	printf("After: %d\n", i);
	if (i == 42)
	{
		printf("------------ OK\n");
	}
	else
	{
		printf("------------ KO :(\n");
	}
	printf("\n");
	return (1);
}
