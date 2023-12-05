/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:58:12 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/05 11:30:24 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*str_of_ints;
	unsigned int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	str_of_ints = (int *) malloc ((max - min) * sizeof(int));
	while (min < max)
	{
		str_of_ints[i] = min;
		++i;
		++min;
	}
	return (str_of_ints);
}

/* int main()
{
	int min = 0;
	int max = 14;
	int *arr = ft_range(min, max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d, ", arr[i]);
		++i;
	}
	printf("\n");
	return (0);
}
 */