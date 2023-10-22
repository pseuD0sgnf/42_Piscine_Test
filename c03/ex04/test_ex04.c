/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:18:41 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/18 17:18:44 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[20];
	char	s2[20];
	char	s3[20];
	char	*str_c;
	char	*str_ft;

	strcpy(s1, "Kapibara");
	strcpy(s2, ""); //Kapibara
//	strcpy(s2, "bar"); //bara
//	strcpy(s2, "bac"); //null
//	strcpy(s2, "c"); //null
	str_c = strstr(s1, s2);
	printf("Result c: %s\n", str_c);
	
	strcpy(s3, "Kapibara");
	str_ft = ft_strstr(s3, s2);
	printf("Result ft: %s\n", str_ft);
	
	return (0);
}
