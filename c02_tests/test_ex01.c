#include <stdio.h>
#include <string.h>
#include "../../c02/ex01/ft_strncpy.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	unsigned int	n;
	unsigned int	m;

	char	src_1[] = "bosnia and hertz";
	char	src_2[] = "hoola blob 909 ent.";
	
	n = 12;
	m = 12;

	char	dest[n];
	char	dest_strncpy[m];

        printf("c02 ex01\n");
        printf("BEFORE\n");
	printf("Source string 1: %s\n", src_1);
	printf("Source string 2: %s\n", src_2);
	printf("\n");

	ft_strncpy(dest, src_1, n);
	strncpy(dest_strncpy, src_2, m);
	
	printf("AFTER\n");
	printf("Source string 1:                %s\n", src_1);
	printf("Source string 2:                %s\n\n", src_2);
	printf("Copied string 1 with ft_strcpy: %s\n", dest);
	printf("Copied string 2 with strcpy:    %s\n", dest_strncpy);
	printf("\n\n\n");
	return (1);
}
