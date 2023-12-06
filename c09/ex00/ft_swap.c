/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:19:19 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/20 09:20:28 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{
	int a = 5;
	int b = 9;
	ft_swap(&a, &b);
	printf("%d=a, %d=b", a, b);
	return 0;
}
*/
