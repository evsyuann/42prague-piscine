/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:34:21 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/30 09:46:56 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	while (num * num <= nb && num < 46341)
	{
		if (num * num == nb)
			return (num);
		++num;
	}
	return (0);
}

/* int main(void)
{
	int nb = 25;
	printf("%d", ft_sqrt(nb));
	return 0;
} */
