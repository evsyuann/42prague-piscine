/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:12:33 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/21 12:44:16 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0')
			return (1);
		if (str[i] < 97 || str[i] > 122)
			return (0);
		++i;
	}
	return (1);
}

/* int main(void)
{
	char str1[] = "catsonelove";
	printf("%d", ft_str_is_lowercase(str1));
	return (0);
} */