/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:37:34 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 12:37:37 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	num = 1;
	int	*nbr1 = &num;
	int	**nbr2 = &nbr1;
	int	***nbr3 = &nbr2;
	int	****nbr4 = &nbr3;
	int	*****nbr5 = &nbr4;
	int	******nbr6 = &nbr5;
	int	*******nbr7 = &nbr6;
	int	********nbr8 = &nbr7;
	int	*********nbr9 = &nbr8;
	printf("origin:%d\n", num);
	ft_ultimate_ft(nbr9);
	printf("after_ft:%d\n", num);
	return (0);
}
