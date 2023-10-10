/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:02:42 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 13:02:43 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int	a = 20;
	int	b = 3;

	printf("a is %d, b is %d\n",  a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div is %d, mod is %d\n", a, b);

}
