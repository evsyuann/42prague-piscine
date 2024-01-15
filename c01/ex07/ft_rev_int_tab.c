/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:34:45 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/17 11:57:36 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		copy;

	i = 0;
	while (i < size / 2)
	{
		copy = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = copy;
		++i;
	}
}

/* int main(int argc, char const *argv[])
{
	int c = 0;
	int size = 3;
	int tab[3] = {1,2,3};
	ft_rev_int_tab(tab, size);
	while (c < 3)
	{
		printf("%d\n", tab[c]);
		++c;
	}
	return 0;
} */