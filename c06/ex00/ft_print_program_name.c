/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:40:32 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/29 12:45:12 by aevsyuti         ###   ########.fr       */
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

	i = 0;
	if (count_arg > 0)
	{
		while (arg[0][i] != '\0')
		{
			ft_putchar(arg[0][i]);
			++i;
		}
		ft_putchar('\n');
	}
	return (0);
}
