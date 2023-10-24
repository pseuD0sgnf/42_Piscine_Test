/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:09:03 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/19 18:09:07 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	/*char	str[20] = "2b0";
	int	ft = ft_atoi_base(str, "0123abc");
	printf("%d\n", ft);*/
	
	printf("should be -123456: %d\n", ft_atoi_base("-123456", "0123456789"));
	fflush(stdout);
	printf("should be 123456: %d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("should be -123456: %d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);
	
	printf("should be %s: %d\n", "123456", ft_atoi_base("    -+-123456", "0123456789"));
	fflush(stdout);
	printf("should be %s: %d\n", "123456", ft_atoi_base("    -+-12?456", "012?456789"));
	fflush(stdout);
	printf("should be %s: %d\n", "12", ft_atoi_base("    -+-12?456", "0123456789"));
	fflush(stdout);
	printf("should be %s: %d\n", "12", ft_atoi_base("    -+-123456", "012?456789"));
	fflush(stdout);
	
	printf("should be %s: %d\n", "0", ft_atoi_base("    -+- 123456", "0123456789"));
	fflush(stdout);
	printf("should be 0: %d\n", ft_atoi_base("-123456", "11"));
	fflush(stdout);
	printf("should be 0: %d\n", ft_atoi_base("-123456", "1"));
	fflush(stdout);
	printf("should be 0: %d\n", ft_atoi_base("-123456", ""));
	fflush(stdout);
	printf("should be 0: %d\n", ft_atoi_base("-123456", "1 2"));
	fflush(stdout);
	printf("should be 0: %d\n", ft_atoi_base("-123456", "1+2"));
	fflush(stdout);
	printf("should be 0: %d\n", ft_atoi_base("-123456", "1-2"));
	fflush(stdout);
	
	return (0);
}
