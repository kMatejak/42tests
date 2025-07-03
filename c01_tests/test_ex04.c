#include <stdio.h>
#include "../../c01/ex04/ft_ultimate_div_mod.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
        int	a;
	int	b;
	int*	div;
	int*	mod;

        a = 42;
	b = 5;
	div = &a;
	mod = &b;

        printf("c01 ex04\n");
        printf("Before: args a=%d, b=%d\n", a, b);

	ft_ultimate_div_mod(div, mod);

	if (a == 8 & b == 2)
        {
                printf(GREEN "After:       a=%d, b=%d\n", a, b);
                printf("------------ OK" RESET "\n\n");
        }
        else
        {
                printf(RED "After:       a=%d, b=%d\n", a, b);
                printf("------------ KO :(" RESET "\n\n");
        }
        return (1);
}

