#include <stdio.h>
#include "../../c01/ex03/ft_div_mod.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
        int	a;
	int	b;
	int	d;
	int	m;
	int*	div;
	int*	mod;

        a = 42;
	b = 5;
	d = 3;
	m = 1;
	div = &d;
	mod = &m;

        printf("c01 ex03\n");
        printf("Before: args a=%d, b=%d\n", a, b);
	printf("             d=%d, m=%d\n", d, m);

	ft_div_mod(a, b, div, mod);

	if (d == 8 & m == 2)
        {
                printf(GREEN "After:       d=%d, m=%d\n", d, m);
                printf("------------ OK" RESET "\n");
        }
        else
        {
                printf(RED "After:       d=%d, m=%d\n", d, m);
                printf("------------ KO :(" RESET "\n");
        }
	printf("\n\n");
        return (1);
}

