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
	char	str[20] = "2b0";
	int	ft = ft_atoi_base(str, "0123abc");
	printf("%d\n", ft);
	return (0);
}
