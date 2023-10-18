/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:29:47 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/17 15:56:03 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*string1;
	char	string2[20];
	unsigned int	len = 0;
//	unsigned int	len2;

	string1 = "kapibarasan";
//	string2[17] = '3';
//	printf("string2[17]: %c\n", string2[17]);
	printf("base: %s\n", string1);
//	len2 = strlcpy(string2, string1, 18);
//	printf("cpy c: %s\n", string2);
//	printf("cpy c length: %d\n", len2);
	len = ft_strlcpy(string2, string1, 5);
	printf("cpy ft: %s\n", string2);
	printf("cpy ft length: %d\n", len);
	if(string2[13] == '\0')
		printf("string2[13]: %d\n", string2[13]);
}
