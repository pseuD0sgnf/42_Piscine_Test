/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:46:17 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/11 13:50:58 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
//	int	c;

//	printf("Please enter a string: ");
//	scanf("%d", &c);
//	ft_rev_int_tab(&c, size);
//	printf("After reverse: %d\n", c);
		
	int	c[] = {5, 6, 7, 8, 9, 0};
	int	size = sizeof(c) / sizeof(c[0]);
	
	ft_rev_int_tab(c, size);
	printf("Testing '5 6 7 8 9 0': ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", c[i]);
	}
	return (0);
}
