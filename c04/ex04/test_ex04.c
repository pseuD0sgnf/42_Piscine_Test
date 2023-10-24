/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:16 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/23 11:23:00 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("(nbr = 133, base = ab, should be baaaabab)\n");
	ft_putnbr_base(133, "ab");
	printf("\n");
	fflush(stdout);
	
	printf("(nbr = –2147483647, base = 0123456789, should be –2147483647)\n");
	ft_putnbr_base(-2147483647, "0123456789");
	printf("\n");
	fflush(stdout);
	
	printf("(nbr = –2147483648, base = 0123456789, should be –2147483648)\n");
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	fflush(stdout);
	
	printf("(nbr = 2147483647, base = 0123456789, should be 2147483647)\n");
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	fflush(stdout);
	
	printf("(nbr = –2147483648, base = 01, should be -10000000000000000000000000000000)\n");
	ft_putnbr_base(INT_MIN, "01");
	printf("\n");
	fflush(stdout);
	
	printf("(nbr = –2147483648, base = 0123456789abcdef, should be -80000000)\n");
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
	printf("\n");
	fflush(stdout);

	return (0);
}
