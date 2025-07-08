#include <stdio.h>
#include "../../c01/ex06/ft_strlen.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char*	str;
	int	len;

        str = "Are you suggesting coconuts migrate?";
	len = 0;

        printf("c01 ex06\n");
        printf("Given string: \"%s\"\nwith a length:         36\n", str);

	len = ft_strlen(str);

	if (len == 36)
        {
                printf(GREEN "Counted with a length: %d\n", len);
                printf("------------ OK" RESET "\n");
        }
        else
        {
                printf(RED "Counted with a length: %d\n", len);
                printf("------------ KO :(" RESET "\n");
        }
	printf("\n\n");
        return (1);
}

