/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:40:31 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/19 14:40:32 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

int	main(void)
{
	char str[] = "     \f  ---+-+1234ab567";
	printf("ft: %d\n", ft_atoi(str));
	return (0);
}
