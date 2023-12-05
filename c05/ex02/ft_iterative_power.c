/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:36:17 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/29 10:00:42 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		new_nb;

	new_nb = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		new_nb *= nb;
		--power;
	}
	return (new_nb);
}

/* int main()
{
	int num = 2;
	int power = 10;
	printf("%d", ft_iterative_power(num, power));
} */