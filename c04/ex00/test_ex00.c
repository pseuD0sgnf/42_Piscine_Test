/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:30:43 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/19 12:38:47 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int	main(void)
{
	char str[] = "Kapibara";
	printf("Kapibara length c: %lu\n", strlen(str));
	printf("Kapibara length ft: %d\n", ft_strlen(str));
	return (0);
}
