#include <stdio.h>
#include "../../c02/ex00/ft_strcpy.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char*	dest;
	char*	src;

        dest = "yollo";
	src = "Hello pomello!";

        printf("c02 ex00\n");
        printf("BEFORE\n");
	printf("Source: %s\nDestination: %s\n", src, dest);
	printf("\n");

	ft_strcpy(dest, src);

	printf("AFTER\n");
	printf("Source: %s\nDestination: %s\n", src, dest);
	
	printf("\n\n\n");
	return (1);
}

