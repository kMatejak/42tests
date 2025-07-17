#include <stdio.h>
#include <string.h>
#include "../../c02/ex09/ft_strcapitalize.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	str_1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str_2[] = "WORkers of the WORld unite; you have nothing to lose but your chains.";
	char	str_3[] = "lORe 42bee bee";

        printf("c02 ex09\n");
        printf("BEFORE\n");
	printf("Source string 1: %s\n", str_1);
	printf("Source string 2: %s\n", str_2);
	printf("Source string 3: %s\n", str_3);
	printf("\n");
	
	printf("AFTER\n");
	printf("String 1 should be: >>Salut, Comment Tu Vas ? 42mots ");
	printf("Quarante-Deux; Cinquante+Et+Un<<\n");
	printf("And it looks like:  >>%s<<\n\n", ft_strcapitalize(str_1));

	printf("String 2 should be: >>Workers Of The World Unite; ");
	printf("You Have Nothing To Lose But Your Chains.<<\n");
	printf("And it looks like:  >>%s<<\n\n", ft_strcapitalize(str_2));
	
	printf("String 3 should be: >>Lore 42bee Bee<<\n");
	printf("And it looks like:  >>%s<<\n\n", ft_strcapitalize(str_3));
	
	printf("\n\n\n\n");
	return (1);
}

