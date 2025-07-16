#include <stdio.h>
#include <string.h>
#include "../../c02/ex07/ft_strupcase.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	str_1[] = "bb87sjka9_ ][9o";
	char	str_2[] = "aplm^&_ noob02!";

        printf("c02 ex07\n");
        printf("BEFORE\n");
	printf("Source string 1: %s\n", str_1);
	printf("Source string 2: %s\n", str_2);
	printf("\n");

	//ft_strupcase(str_1);
	//ft_strupcase(str_2);
	
	printf("AFTER\n");
	printf("String 1 should be: >>BB87SJKA9_ ][9O<<\n");
	printf("And it looks like:  >>%s<<\n\n", ft_strupcase(str_1));
	printf("String 2 should be: >>APLM^&_ NOOB02!<<\n");
	printf("And it looks like:  >>%s<<\n", ft_strupcase(str_2));
	printf("\n\n\n\n");
	return (1);
}

