#include <stdio.h>
#include "../../c01/ex01/ft_ultimate_ft.c"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	int     		i;
	int*    		nb1;
	int**			nb2;
	int***			nb3;
	int****			nb4;
	int*****		nb5;
	int******		nb6;
	int*******		nb7;
	int********		nb8;
	int*********	nbr;

    i = 33;
        
	nb1 = &i;
	nb2 = &nb1;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	nbr = &nb8;

    printf("c01 ex01\n");
    printf("Before: %d\n", i);
        
	ft_ultimate_ft(nbr);

    if (i == 42)
    {
    	printf(GREEN "After: %d\n------------ OK" RESET "\n\n", i);
    }
    else
    {
    	printf(RED "After: %d\n------------ KO :(" RESET "\n\n", i);
    }
    return (1);
}

