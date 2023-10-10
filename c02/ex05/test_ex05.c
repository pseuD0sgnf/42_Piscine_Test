/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:40:40 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 10:40:41 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void) {
    char	str1[] = "KAPIBARA";
    char	str2[] = "Kapibara";
    char	str3[] = "";

    printf("Testing is uppercase: %d\n", ft_str_is_uppercase(str1));
    printf("Testing is not only uppercase: %d\n", ft_str_is_uppercase(str2));
    printf("Testing is empty: %d\n", ft_str_is_uppercase(str3));
    return (0);
}
