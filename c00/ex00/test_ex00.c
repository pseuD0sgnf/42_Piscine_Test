/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:16:49 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 15:31:05 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putchar.c"

int	main(void)
{
	int	c;

	printf("Please enter a character: ");
	c = getchar();
	if (c != EOF)
	{
		ft_putchar(c);
	}
	printf("\n");
	return (0);
}
