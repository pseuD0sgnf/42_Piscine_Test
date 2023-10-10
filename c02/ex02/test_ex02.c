/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:37:18 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/10 10:37:21 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
    char	str1[] = "Kapibara";
    char	str2[] = "Kapi1piki";
    char	str3[] = "";

    printf("Testing is alpha: %d\n", ft_str_is_alpha(str1));
    printf("Testing is not only alpha: %d\n", ft_str_is_alpha(str2));
    printf("Testing is empty: %d\n", ft_str_is_alpha(str3));
    return (0);
}
