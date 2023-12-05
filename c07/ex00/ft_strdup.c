/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:50:08 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/01 10:58:34 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*new_str;

	len = my_strlen(src);
	new_str = (char *) malloc (len * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* int main()
{
	char str[] = "abcdefghijklmnopqr";
	printf("%s", ft_strdup(str));
} */