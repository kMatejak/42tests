#include <stdio.h>
//#include "../../c01/ex02/ft_swap.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
        int	a;
	int	b;

        a = 24;
	b = 42;
        printf("c01 ex02\n");
        printf("Before: args -- %d, %d\n", a, b);

	//ft_swap(*ptr_a, *ptr_b);

        printf("After: args -- %d, %d\n", a, b);
        
	if (a == 42 & b == 24)
        {
		printf(GREEN "------------ OK" RESET "\n");
        }
        else
        {
                printf(RED "------------ KO :( args must be swapped" RESET "\n");
        }
	printf("\n");
        return (1);
}

