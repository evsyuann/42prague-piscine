/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:58:32 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/23 11:59:29 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	my_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, my_strlen(str));
}
