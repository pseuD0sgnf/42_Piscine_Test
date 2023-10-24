/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:40:31 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/24 12:16:15 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

int	main(void)
{
	char str[] = "     \f  ----+-+233kapiba3n";
	printf("atoi '     \\f  ---+-+233kapiba3n': %d\n", ft_atoi(str));
	
	char str1[] = "- 1325632167";
	printf("atoi '%s': %d\n", str1, ft_atoi(str1));
	
	char str2[] = "2147483648";
	printf("atoi '%s': %d\n", str2, ft_atoi(str2));
	
	return (0);
}
