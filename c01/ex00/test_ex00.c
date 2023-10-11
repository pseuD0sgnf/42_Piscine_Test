/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:22:47 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 12:22:48 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	number = 9;
	int	*nbr = &number;

	printf("origin:%d\n", *nbr);
	ft_ft (nbr);
	printf("after_ft:%d\n", number);
	return (0);
}
