/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:24:09 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/11 13:28:14 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
//	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str[] = "salut, comm!!ent tu vas ? 42mots quarante-deux; cinquante+et+un";
    	ft_strcapitalize(str);
    	printf("%s\n", str);
	return (0);
}
