#include <stdio.h>
#include <string.h>
#include "../../c02/ex06/ft_str_is_printable.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	str_a[] = "927635";
	char	str_b[] = "HOOLA Blob 909 ent.";
	char	str_c[] = "";
	char	str_d[] = "do not\nprint\tnon-printable...! but maybe with \\t\\n escaping signs.";

	int	a, b, c, d;

        printf("c02 ex06\n");
        printf("BEFORE\n");
	printf("Source string 1: >>%s<<\n", str_a);
	printf("Source string 2: >>%s<<\n", str_b);
	printf("Source string 3: >>%s<< (is empty)\n", str_c);
	printf("Source string 4: >>%s<<\n", str_d);
	printf("\n");

	a = ft_str_is_printable(str_a);
	b = ft_str_is_printable(str_b);
	c = ft_str_is_printable(str_c);
	d = ft_str_is_printable(str_d);
	
	printf("AFTER\n");
	if (a == 1)
	{
		printf(GREEN "String a: >>%s<<\nhas only digits,", str_a);
		printf("but still all are printable. OK :)" RESET "\n\n"); 
	}
	else
	{
		printf(RED "String a: >>%s<<\nhas only digits,", str_a);
		printf("but still all are printable. KO :(" RESET "\n\n");
	}
	if (b == 1)
	{
		printf(GREEN "String b: >>%s<<\nhas mixed characters ", str_b);
		printf("and all are printable. OK :)" RESET "\n\n");
	}
	else
	{
		printf(RED "String b: >>%s<<\nhas mixed characters ", str_b);
		printf("and all are printable. KO :(" RESET "\n\n");
	}
	if (c == 1)
	{
		printf(GREEN "String c >>%s<< is empty (returned: 1). OK :)" RESET "\n\n", str_c);
	}
	else
	{
		printf(RED "String c >>%s<< is empty (returned: 0). KO :(" RESET "\n\n", str_c);
	}
	if (d == 0)
	{
		printf(GREEN "String d: >>%s<<\ncontains non-printable ", str_d);
		printf("(returned: 0). OK :)" RESET "\n\n"); 
	}
	else
	{
		printf(RED "String d: >>%s<<\ncontains non-printable ", str_d);
		printf("(returned: 1). KO :(" RESET "\n\n");
	}
	printf("\n\n\n");
	return (1);
}
