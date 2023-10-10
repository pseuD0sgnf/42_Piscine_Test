/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:44:26 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 12:44:35 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 42;
	printf("origin - a:%d, b:%d\n", x, y);
	ft_swap(&x, &y);
	printf("after - a:%d, b:%d\n", x, y);
	return (0);
}

