#include <stdio.h>
#include <string.h>
#include "../../c02/ex05/ft_str_is_uppercase.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	str_a[] = "927635";
	char	str_b[] = "HOOLA Blob 909 ent.";
	char	str_c[] = "";
	char	str_d[] = "UPPERCASEEVENBETTER";

	int	a, b, c, d;

        printf("c02 ex05\n");
        printf("BEFORE\n");
	printf("Source string 1: >>%s<<\n", str_a);
	printf("Source string 2: >>%s<<\n", str_b);
	printf("Source string 3: >>%s<< (is empty)\n", str_c);
	printf("Source string 4: >>%s<<\n", str_d);
	printf("\n");

	a = ft_str_is_uppercase(str_a);
	b = ft_str_is_uppercase(str_b);
	c = ft_str_is_uppercase(str_c);
	d = ft_str_is_uppercase(str_d);
	
	printf("AFTER\n");
	if (a == 0)
	{
		printf(GREEN "String a: >>%s<<\ndoes not have any alpha." RESET "\n\n", str_a);
	}
	else
	{
		printf(RED "String a: >>%s<<\ndoes not have any alpha." RESET "\n\n", str_a);
	}

	if (b == 0)
	{
		printf(GREEN "String b: >>%s<<\nhas not only alpha uppercase." RESET "\n\n", str_b);
	}
	else
	{
		printf(RED "String b: >>%s<<\nhas not only alpha uppercase." RESET "\n\n", str_b);
	}

	if (c == 1)
	{
		printf(GREEN "String c >>%s<< is empty." RESET "\n\n", str_c);
	}
	else
	{
		printf(RED "String c >>%s<< is empty." RESET "\n\n", str_c);
	}

	if (d == 1)
	{
		printf(GREEN "String d: >>%s<<\ncontains only alpha uppercase." RESET "\n\n", str_d);
	}
	else
	{
		printf(RED "String d: >>%s<<\ncontains only alpha uppercase." RESET "\n\n", str_d);
	}
	printf("\n\n\n");
	return (1);
}
