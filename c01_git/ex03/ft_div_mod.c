/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:12:19 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/17 09:45:00 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(int argc, char const *argv[])
{
	int a = 20;
	int b = 3;

	int c = 0;
	int d = 0;

	ft_div_mod(a, b, &c, &d);
	printf("%d = div, %d = mod", c, d);
	return 0;
} */
