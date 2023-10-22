/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:08:55 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/18 16:25:31 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[20];
	char	s2[20];
	char	s3[20];
	char	*cat_c;
	char	*cat_ft;

	strcpy(s1, "Kapibara");
	strcpy(s2, "San");
	cat_c = strncat(s1, s2, 1);
	printf("Result c: %s\n", cat_c);
	
	strcpy(s3, "Kapibara");
	cat_ft = ft_strncat(s3, s2, 1);
	printf("Result ft: %s\n", cat_ft);
	return (0);
}
