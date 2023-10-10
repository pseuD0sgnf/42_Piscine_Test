/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:37:56 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 10:37:57 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void) {
    char	str1[] = "114514";
    char	str2[] = "Kapi1piki";
    char	str3[] = "";

    printf("Testing is digit: %d\n", ft_str_is_numeric(str1));
    printf("Testing is not only digit: %d\n", ft_str_is_numeric(str2));
    printf("Testing is empty: %d\n", ft_str_is_numeric(str3));
    return (0);
}
