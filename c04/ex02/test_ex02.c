/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:03:52 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/19 13:03:54 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb);

void	ft_putchar(char c);

int	main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(233);
	ft_putchar('\n');
	ft_putnbr(-144514);
	ft_putchar('\n');
	ft_putnbr(+2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return (0);
}
