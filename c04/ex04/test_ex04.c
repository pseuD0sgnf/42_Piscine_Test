/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:16 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/19 16:18:18 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int	nbr = 133;
	ft_putnbr_base(nbr, "ab");
	return (0);
}
