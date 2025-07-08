#include <stdio.h>
#include "../../c01/ex08/ft_sort_int_tab.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	int*	tab;
	int	size;
	int	i;

        int arr[9] = { 5, 6, 2, 8, 1, 9, 4, 3, 7 };
	
	size = 9;
	tab = &arr[0];

        printf("c01 ex08\n");
        printf("Given array of digits:\n\t\t\t");
	i = 0;
	while (i < size)
	{
		printf("%d  ", arr[i]);  // print each element in the array
		i++;
	}
	printf("\n");		
	printf("with total length: 9\n");

	ft_sort_int_tab(tab, size);

	printf("It should be ascending order. Is there?\n\t\t\t");
	i = 0;
	while (i < size)
	{
		printf("%d  ", arr[i]); // print each element in reversed array
		i++;
	}
	printf("\n\n\n");
	return (1);
}

