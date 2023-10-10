/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:18:20 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/09 13:18:36 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	string[12];
	int	len;

	strcpy(string, "Hello World!");
	len = ft_strlen(&string[0]);
	printf("True length is 12. Test length is %d\n", len);
}
