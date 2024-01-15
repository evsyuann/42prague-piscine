/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:54:40 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/17 10:29:05 by aevsyuti         ###   ########.fr       */
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

/* int main(int argc, char const *argv[])
{
	char str[] = "gdshdg jdfhks";
	ft_putstr(str);
	return 0;
} */
