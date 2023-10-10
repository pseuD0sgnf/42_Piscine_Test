/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:56:37 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 12:56:39 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int	a = 18;
	int	b = 5;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("a is %d, b is %d, div is %d, mod is %d\n", a, b, div, mod);

}
