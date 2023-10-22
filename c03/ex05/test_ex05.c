/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:51:55 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/22 16:40:27 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	s1[20];
	char	s2[20];
	char	s3[20];
	unsigned int	cat_c;
	unsigned int	cat_ft;

	strcpy(s1, "Kapibara");
	strcpy(s2, "San");
	cat_c = strlcat(s1, s2, 11);
	printf("Result c: %d\n", cat_c);
	printf("Output c: %s\n", &s1);
	
	strcpy(s3, "Kapibara");
	cat_ft = ft_strlcat(s3, s2, 11);
	printf("Result ft: %d\n", cat_ft);
	printf("Output ft: %s\n", &s3);
	
	if (cat_c == cat_ft)
		printf("Same!\n");
	return (0);
}
