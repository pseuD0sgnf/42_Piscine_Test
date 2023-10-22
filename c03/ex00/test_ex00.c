/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:50:57 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/17 17:48:32 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char	s1 = *argv[1];
	char	s2 = *argv[2];
	int		result = strcmp(&s1, &s2);
	int		result_ft = ft_strcmp(&s1, &s2);

	if (argc == 3)
	{
		printf("Result_c: %d\n", result);
		printf("Result_ft: %d\n", result_ft);
		if (result == result_ft)
			printf("Same!\n");
	}
	return (0);	
}
