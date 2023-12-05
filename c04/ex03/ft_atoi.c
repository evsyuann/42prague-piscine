/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:08:23 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/28 11:12:06 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		new_int;
	int		sign;

	new_int = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		new_int = new_int * 10 + (*str - '0');
		str++;
	}
	return (new_int * sign);
}

/* int main()
{
	char str[] = "   -+-+1456dhfds";
	int res = ft_atoi(str);
	printf("%d", res);
	return 0;
	
} */