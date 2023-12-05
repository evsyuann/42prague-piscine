/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:40:23 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/29 13:30:35 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int count_arg, char **arg)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (count_arg > 1)
	{
		while (j < count_arg)
		{
			while (arg[j][i] != '\0')
			{
				ft_putchar(arg[j][i]);
				++i;
			}
			ft_putchar('\n');
			++j;
			i = 0;
		}
	}
	return (0);
}
