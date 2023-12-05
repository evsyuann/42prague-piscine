/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:58:52 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/21 12:44:10 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0')
			return (1);
		if (str[i] < 48 || str[i] > 57)
			return (0);
		++i;
	}
	return (1);
}

/* int main(void)
{
	char str1[] = "123h";
	printf("%d", ft_str_is_numeric(str1));
	return (0);
} */