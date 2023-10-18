/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:26:25 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/17 13:37:37 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*origin;
	char	copy[20];
	unsigned int	length;

	origin = "Kapibara san!";
	copy[17] = '3';
	printf("copy[17]: %c\n", copy[17]);
	length = strlen(origin) + 1;
	printf("src is %s\n", origin);
	ft_strncpy(copy, origin, length);
	printf("ft_strncpy is %s\n", copy);
	memset(copy, 0, length);
	strncpy(copy, origin, length);
	printf("strncpy is %s\n", copy);
	memset(copy, 0, length);
	ft_strncpy(copy, origin, 5);
	printf("When length is less, ft_strncpy is %s\n", copy);
	memset(copy, 0, length);
	ft_strncpy(copy, origin, 20);
	printf("When length is more, ft_strncpy is %s\n", copy);
	printf("copy[17]: %c\n", copy[17]);
	return (0);
}
