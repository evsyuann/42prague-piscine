/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:30:44 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/16 15:30:46 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c ;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

// int main(){
//     ft_print_numbers();
//     return 0;
// }