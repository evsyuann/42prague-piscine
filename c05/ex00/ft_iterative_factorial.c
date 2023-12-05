/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:42:22 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/29 10:00:22 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		++i;
	}
	if (nb < 0)
		return (0);
	return (fact);
}

/* int main()
{
	int num = 0;
	printf("%d", ft_iterative_factorial(num));
} */