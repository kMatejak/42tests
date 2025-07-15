#include <stdio.h>
#include <string.h>
#include "../../c02/ex00/ft_strcpy.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	src_1[] = "!@87sjka9__][90";
	char	src_2[] = "aplm^&_ noob02!";
	char	dest[16];
	char	dest_strcpy[16];

        printf("c02 ex00\n");
        printf("BEFORE\n");
	printf("Source string 1: %s\n", src_1);
	printf("Source string 2: %s\n", src_2);
	printf("\n");

	ft_strcpy(dest, src_1);
	strcpy(dest_strcpy, src_2);
	
	printf("AFTER\n");
	printf("Source string 1:                %s\n", src_1);
	printf("Source string 2:                %s\n\n", src_2);
	printf("Copied string 1 with ft_strcpy: %s\n", dest);
	printf("Copied string 2 with strcpy:    %s\n", dest_strcpy);
	printf("\n\n\n");
	return (1);
}

