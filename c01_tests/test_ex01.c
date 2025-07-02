#include <stdio.h>
#include "../../c01/ex01/ft_ultimate_ft.c"

int	main(void)
{
        int     i;
        int*    	nb1;
	int**		nb2;
	int***		nb3;
	int****		nb4;
	int*****	nb5;
	int******	nb6;
	int*******	nb7;
	int********	nb8;
	int*********	nbr;

        i = 33;
        printf("c01 ex01\n");
        printf("Before: %d\n", i);
        
	nb1 = &i;
	nb2 = &nb1;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	nbr = &nb8;
        
	ft_ultimate_ft(nbr);

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

