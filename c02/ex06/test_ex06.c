/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:41:16 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/17 14:11:23 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void) {
    char	str1[] = "KAPIBA RA~";
    char	str2[] = "K\na\rp\bi\tb\va\0r\aa";
    char	str3[] = "";

    printf("Testing is printable: %d\n", ft_str_is_printable(str1));
    printf("Testing is not only printable: %d\n", ft_str_is_printable(str2));
    printf("Testing is empty: %d\n", ft_str_is_printable(str3));
    return (0);
}
