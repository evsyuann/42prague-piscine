/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:08:54 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/23 11:23:28 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	make_hex(char c)
{
	char	*hex_str;

	hex_str = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_str[c / 16]);
	ft_putchar(hex_str[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			make_hex(str[i]);
		}
		++i;
	}
}

/* int main(void)
{
	char str1[] = "Coucou\ntu vas b\aien\b , \r?";
	ft_putstr_non_printable(str1);
	return (0);
}  */