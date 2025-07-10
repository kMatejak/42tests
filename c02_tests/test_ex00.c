#include <stdio.h>
#include <string.h>
#include "../../c02/ex00/ft_strcpy.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	src[] = "hello pomello!";
	char	dest[15];
	//char*	src = &source;
	//char*	dest = &final;

        printf("c02 ex00\n");
        printf("BEFORE\n");
	printf("Source string: %s\n", src);
	printf("\n");

	//ft_strcpy(dest, src);
	strcpy(dest, src);
	printf("AFTER\n");
	printf("Copied string with strcpy: %s\n", dest);

	/*
	printf("Source: %s\nDestination: %s\n", src, dest);
	*/	
	printf("\n\n\n");
	return (1);
}

