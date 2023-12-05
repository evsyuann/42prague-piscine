/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:36:26 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/30 09:50:19 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (nb);
	else if (nb <= 1)
		return (0);
	else if (nb % 2 == 0)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (2);
	if (ft_is_prime(nb) == nb)
		return (nb);
	else
	{
		while (ft_is_prime(nb + i) == 0)
			++i;
		return (nb + i);
	}
}

/* int main()
{
	int num = 0;
	printf("%d", ft_find_next_prime(num));
	return 0;
} */