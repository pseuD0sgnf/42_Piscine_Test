/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:46:09 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 12:13:28 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_is_negative.c"

int	main(void)
{
	ft_is_negative(100);
	ft_is_negative(0);
	ft_is_negative(-10);
	printf(" are the Result of 100, 0 and -10\n");
}
