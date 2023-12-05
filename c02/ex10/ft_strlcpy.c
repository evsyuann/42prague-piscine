/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:43:49 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/21 12:58:37 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size -1 && src[i] != '\0')
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		++i;
	}
	return (i);
}

/* int main(void)
{
	char str1[] = "Anito want a cake";
	char str2[18];
	ft_strlcpy(str2, str1, 5);
	printf("%d", ft_strlcpy(str2, str1, 5));
	return (0);
} */
