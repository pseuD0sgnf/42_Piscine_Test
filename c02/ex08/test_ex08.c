/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:41:16 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 10:41:19 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void) {
	char	str[] = "KAPIBara1PIKI";
	char	*upcase = ft_strlowcase(str);

	printf("Testing KAPIBara1PIKI: %s\n", upcase);
	return (0);
}
