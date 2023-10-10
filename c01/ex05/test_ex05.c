/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:07:26 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 13:07:27 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	string[12];

	strcpy(string, "Hello World!");
	ft_putstr(&string[0]);
}

