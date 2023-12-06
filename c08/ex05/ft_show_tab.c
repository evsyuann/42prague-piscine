/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:15:04 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/04 13:49:28 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

/* int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*new_str;

	len = ft_strlen(src);
	new_str = (char *) malloc (len * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*my_struct;
	int			i;

	i = 0;
	my_struct = (t_stock_str *) malloc ((ac + 1) * sizeof(t_stock_str));
	if (my_struct == 0)
		return (NULL);
	while (i < ac)
	{
		my_struct[i].size = ft_strlen(av[i]);
		my_struct[i].str = av[i];
		my_struct[i].copy = ft_strdup(av[i]);
		if (my_struct[i].copy == NULL)
		{
			while (i > 0)
			{
				free(my_struct[i--].copy);
			}
			free(my_struct);
			return (NULL);
		}
		++i;
	}
	my_struct[i].str = 0;
	return (my_struct);
} */

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

/* int main(int argc, char *argv[])
{
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	ft_show_tab(structs);
	return 0;
}
 */