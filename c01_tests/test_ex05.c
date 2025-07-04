#include <stdio.h>
#include <unistd.h>
#include "../../c01/ex05/ft_putstr.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	char*	str;
	
	printf("c01 ex05\n");

	printf("Test case 01\n");
	str = "Flamingo goes around";
    	printf("Expected: %s\n", str);
	write(1, "Given:    ", 10);
	ft_putstr(str);
	printf("\n\n");
	
	printf("Test case 02\n");
	str = "DR0P_";
	printf("Expected: %s\n", str);
	write(1, "Given:    ", 10);
	ft_putstr(str);
	printf("\n\n");
	
	printf("Test case 03\n");
	str = "\\%4^UwU__|//()'frollo'";
	printf("Expected: %s\n", str);
	write(1, "Given:    ", 10);
	ft_putstr(str);
	printf("\n\n");

    	return (1);
}

