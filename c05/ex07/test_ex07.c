#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX - 1, ft_find_next_prime(INT_MAX - 1));
	printf("find_next_prime(%d) = %d\n", INT_MIN, ft_find_next_prime(INT_MIN));
}
