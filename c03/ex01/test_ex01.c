/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:21:40 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/20 11:21:41 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "kapa";
	s2 = "kapi";
	printf("c  : %d\n", strncmp(s1, s2, 4));
	printf("ft : %d\n", ft_strncmp(s1, s2, 4));
	return (0);
}
