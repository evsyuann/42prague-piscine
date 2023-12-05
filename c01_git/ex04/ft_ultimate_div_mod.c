/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:44:41 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/17 09:53:26 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		clone_a ;

	clone_a = *a ;
	*a = *a / *b ;
	*b = clone_a % *b ;
}

/* int main(int argc, char const *argv[])
{
	int a = 20;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d = div, %d = mod", a, b);
	return 0;
} */
