#include <stdio.h>
#include <string.h>
#include "../../c02/ex08/ft_strlowcase.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	str_1[] = "BB87SJKA9_ ][9O";
	char	str_2[] = "APLM^&_ NOOB02!";

        printf("c02 ex08\n");
        printf("BEFORE\n");
	printf("Source string 1: %s\n", str_1);
	printf("Source string 2: %s\n", str_2);
	printf("\n");
	
	printf("AFTER\n");
	printf("String 1 should be: >>bb87sjka9_ ][9o<<\n");
	printf("And it looks like:  >>%s<<\n\n", ft_strlowcase(str_1));
	printf("String 2 should be: >>aplm^&_ noob02!<<\n");
	printf("And it looks like:  >>%s<<\n", ft_strlowcase(str_2));
	printf("\n\n\n\n");
	return (1);
}

