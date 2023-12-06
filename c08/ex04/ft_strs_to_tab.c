/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:01:01 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/06 12:49:21 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
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
	if (new_str == NULL)
		return (NULL);
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
	if (my_struct == NULL)
		return (NULL);
	while (i < ac)
	{
		my_struct[i].size = ft_strlen(av[i]);
		my_struct[i].str = av[i];
		my_struct[i].copy = ft_strdup(av[i]);
		++i;
	}
	my_struct[i].str = 0;
	my_struct[i].copy = 0;
	my_struct[i].size = 0;
	return (my_struct);
}

/* int main(int argc, char ** argv)
{
	int					i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("original : %s\n", structs[i].str);
		printf("copied : %s\n", structs[i].copy);
		printf("size : %d\n", structs[i].size);
		i++;
	}
} */