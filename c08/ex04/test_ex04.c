#include <stdlib.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	int	ac;
	char	**av;
	int	i;
	t_stock_str	*stock;

	ac = 10;
	i = 0;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	while (i < ac)
	{
		av[i] = (char *)malloc((2 + 1) * sizeof(char));
		av[i][0] = 'o';
		av[i][1] = (char)(i + '0');
		av[i][2] = '\0';
		i++;
	}
	stock = ft_strs_to_tab(ac, av);
	ft_show_tab(stock);
	return (0);
}
