/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:08:26 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/05 11:29:29 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*str_of_ints;
	int	j;
	int	i;
	int	diff;

	j = 0;
	i = min;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	str_of_ints = (int *) malloc ((diff) * sizeof(int));
	if (str_of_ints == NULL)
		return (-1);
	while (j < diff)
	{
		str_of_ints[j] = i;
		++j;
		++i;
	}
	*range = str_of_ints;
	return (j);
}

/* int main()
{
	int *result;
	int min = -10;
	int max = 10;
	int size = ft_ultimate_range(&result, min, max);
	int i = 0;
	if (size != -1)
	{
		while (i < max - min)
		{
			printf("%d, ", result[i]);
			++i;
		}
		printf("\n");
		printf("%d\n", size);
	}
	return (0);
} */