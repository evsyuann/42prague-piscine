/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:18:28 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/21 12:44:19 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0')
			return (1);
		if (str[i] < 65 || str[i] > 90)
			return (0);
		++i;
	}
	return (1);
}

/* int main(void)
{
	char str1[] = "CATS";
	printf("%d", ft_str_is_uppercase(str1));
	return (0);
} */