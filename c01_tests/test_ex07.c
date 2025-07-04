#include <stdio.h>
#include "../../c01/ex07/ft_rev_int_tab.c"
#define RED	"\033[31m"
#define GREEN	"\033[32m"
#define RESET	"\033[0m"

int	main(void)
{
	int*	tab;
	int	size;
	int	i;

        int arr[7] = {5, 6, 2, 8, 1, 9, 2};
	
	size = 7;
	tab = &arr[0];

        printf("c01 ex07\n");
        printf("Given array of digits:\n\t\t\t");
	i = 0;
	while (i < size)
	{
		printf("%d  ", arr[i]);  // print each element in the array
		i++;
	}
	printf("\n");		
	printf("with total length: 7\n");

	ft_rev_int_tab(tab, size);

	printf("It should be reverse order. Is there?\n\t\t\t");
	i = 0;
	while (i < size)
	{
		printf("%d  ", arr[i]); // print each element in reversed array
		i++;
	}
	printf("\n\n");
	return (1);
}

