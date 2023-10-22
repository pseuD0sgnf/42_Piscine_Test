/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:26:53 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/21 18:25:32 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src);

int	main(void)
{
	char s1[100];
	char s2[100];

	strcpy(s1, "Kapibaraaaaaaaaaaaa");
	strcpy(s2, "San");
	printf("Result c: %s\n", strcat(s1, s2));
	strcpy(s1, "Kapibaraaaaaaaaaaaa");
	printf("Result ft: %s\n", ft_strcat(s1, s2));
	return (0);
}
