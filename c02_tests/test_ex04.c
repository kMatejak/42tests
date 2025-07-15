#include <stdio.h>
#include <string.h>
#include "../../c02/ex04/ft_str_is_lowercase.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	str_a[] = "927635";
	char	str_b[] = "hoola blob 909 ent.";
	char	str_c[] = "";
	char	str_d[] = "bosniaandhertz";
	char	str_e[] = "CamelCaseIsAwesome";

	int	a, b, c, d, e;

        printf("c02 ex04\n");
        printf("BEFORE\n");
	printf("Source string 1: >>%s<<\n", str_a);
	printf("Source string 2: >>%s<<\n", str_b);
	printf("Source string 3: >>%s<< (is empty)\n", str_c);
	printf("Source string 4: >>%s<<\n", str_d);
	printf("Source string 5: >>%s<<\n", str_e);
	printf("\n");

	a = ft_str_is_lowercase(str_a);
	b = ft_str_is_lowercase(str_b);
	c = ft_str_is_lowercase(str_c);
	d = ft_str_is_lowercase(str_d);
	e = ft_str_is_lowercase(str_e);
	
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
		printf(GREEN "String b: >>%s<<\nhas not only alpha." RESET "\n\n", str_b);
	}
	else
	{
		printf(RED "String b: >>%s<<\nhas not only alpha." RESET "\n\n", str_b);
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
		printf(GREEN "String d: >>%s<<\ncontains only alpha lowercase." RESET "\n\n", str_d);
	}
	else
	{
		printf(RED "String d: >>%s<<\ncontains only alpha lowercase." RESET "\n\n", str_d);
	}

	if (e == 0)
	{
		printf(GREEN "Sting e: >>%s<<\ncontains alpha ", str_e); 
		printf("lowercase and uppercase." RESET "\n\n");
	}
	else
	{
		printf(RED "String e: >>%s<<\ncontains alpha ", str_e);
		printf("lowercase and uppercase." RESET "\n\n");
	}
	printf("\n\n\n");
	return (1);
}
