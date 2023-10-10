/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:58:11 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 14:02:51 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*origin;
	char	copy[20];
	char	*copy2;
	char	copy_test[20];
	int	check = 1;

	origin = "Kapibara san!";
	printf("src is %s\n", origin);
	copy2 = ft_strcpy(copy, origin);
	printf("ft_strcpy is '%s'\n", copy);
	printf("ft_strcpy returns '%s'\n", copy2);
	strcpy(copy_test, origin);
	size_t length = strlen(origin) + 1;
	for (size_t i = 0; i < length; i++)
	{
		check = copy_test[i] == copy[i];
		if (check == 0)
		{
			printf("Not same! strcpy is '%c', ft_strcpy is '%c'\n", copy_test[i], copy[i]);
			break;
		}
		else
		printf("Same! strcpy is '%c', ft_strcpy is '%c'\n", copy_test[i], copy[i]);
	}
	return (0);
}
