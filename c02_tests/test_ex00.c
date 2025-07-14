#include <stdio.h>
#include <string.h>
#include "../../c02/ex00/ft_strcpy.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char	src_1[] = "hello pomello!";
	char	src_2[] = "!@87sjka9;;][\\0";
	char	src_3[] = "aplm^&_ noob02!";
	char	dest_1[15];
	char	dest_2[15];
	char	dest_strcpy[15];

        printf("c02 ex00\n");
        printf("BEFORE\n");
	printf("Source string 1: %s\n", src_1);
	printf("Source string 2: %s\n", src_2);
	printf("Source string 3: %s\n", src_3);
	printf("\n");

	ft_strcpy(dest_1, src_1, 15);
	ft_strcpy(dest_2, src_2, 15);
	ft_strcpy(dest_strcpy, src_3, 15);
	
	printf("AFTER\n");
	printf("Copied string 1 with ft_strcpy: %s\n", dest_1);
	printf("Copied string 2 with ft_strcpy: %s\n", dest_2);
	printf("strcpy string 3:                %s\n", dest_strcpy);

	printf("\n\n\n");
	return (1);
}

