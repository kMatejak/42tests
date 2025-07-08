#include <stdio.h>
#include "../../c01/ex00/ft_ft.c"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	int 	i;
	int*	nbr;

	i = 21;
	nbr = &i;

	printf("c01 ex00\n");
	printf("Before: %d\n", i);
	
	ft_ft(nbr);

	if (i == 42)
	{
		printf(GREEN "After: %d\n------------ OK" RESET "\n", i);
	}
	else
	{
		printf(RED "After: %d\n------------ KO :(" RESET "\n", i);
	}
	printf("\n\n");
	return (1);
}
