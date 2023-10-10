/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:41:16 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 10:41:19 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void) {
	char	str[] = "kapiBara1piki";
	char	*upcase = ft_strupcase(str);

	printf("Testing kapiBara1piki: %s\n", upcase);
	return (0);
}
