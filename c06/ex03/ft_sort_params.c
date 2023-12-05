/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:38:20 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/29 11:28:16 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_str(char **str, int size)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (size > 1)
	{
		while (j < size)
		{
			while (str[j][i] != '\0')
			{
				ft_putchar(str[j][i]);
				++i;
			}
			ft_putchar('\n');
			++j;
			i = 0;
		}
	}
}

int	comparing_str(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i])
		++i;
	if (str1[i] == str2[i])
		return (0);
	else
		return (str1[i] - str2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	**my_argv;
	char	*copy_str;

	my_argv = argv;
	j = 2;
	i = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			if (comparing_str(my_argv[j], my_argv[j - 1]) < 0)
			{
				copy_str = my_argv[j - 1];
				my_argv[j - 1] = my_argv[j];
				my_argv[j] = copy_str;
			}
			++j;
		}
	}
	print_str(my_argv, argc);
	return (0);
}
