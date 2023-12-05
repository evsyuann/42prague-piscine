/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:57:33 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/29 14:20:52 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char const **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				++j;
			}
			ft_putchar('\n');
			j = 0;
			--i;
		}
	}
	return (0);
}
