/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:40:12 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 10:40:14 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void) {
    char	str1[] = "kapibara";
    char	str2[] = "Kapibara";
    char	str3[] = "";

    printf("Testing is lowercase: %d\n", ft_str_is_lowercase(str1));
    printf("Testing is not only lowercase: %d\n", ft_str_is_lowercase(str2));
    printf("Testing is empty: %d\n", ft_str_is_lowercase(str3));
    return (0);
}
