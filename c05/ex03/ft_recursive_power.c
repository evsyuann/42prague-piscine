/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:18:48 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/29 10:01:00 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

/* int main()
{
	int nb = 2;
	int power = 1;
	printf("%d", ft_recursive_power(nb, power));
} */