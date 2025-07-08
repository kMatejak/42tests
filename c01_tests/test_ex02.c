#include <stdio.h>
#include "../../c01/ex02/ft_swap.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
        int	a;
	int	b;
	int*	ptr_a;
	int*	ptr_b;

        a = 24;
	b = 42;
	ptr_a = &a;
	ptr_b = &b;

        printf("c01 ex02\n");
        printf("Before: args %d, %d\n", a, b);

	ft_swap(ptr_a, ptr_b);

	if (a == 42 & b == 24)
        {
                printf(GREEN "After: args %d, %d\n", a, b);
                printf("------------ OK" RESET "\n");
        }
        else
        {
                printf(RED "After: args %d, %d\n", a, b);
                printf("------------ KO :( args must be swapped" RESET "\n");
        }
	printf("\n\n");
        return (1);
}

