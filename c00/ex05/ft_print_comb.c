/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:31:52 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/16 15:32:21 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing_combinations(char a, char b, char c)
{
	if (a < '7')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				printing_combinations(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

// int main(){
//     ft_print_comb();
//     return 0;
// }
