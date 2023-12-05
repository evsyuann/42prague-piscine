/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:35:43 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/21 12:44:23 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0')
			return (1);
		if (str[i] < 32 || str[i] > 126)
			return (0);
		++i;
	}
	return (1);
}

/* int main(void)
{
	char str1[] = "~";
	printf("%d", ft_str_is_printable(str1));
	return (0);
} */