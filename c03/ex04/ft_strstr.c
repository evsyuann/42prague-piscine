/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:38:31 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/27 10:02:18 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i - j);
			++j;
		}
		else
			j = 0;
		++i;
	}
	return (0);
}

/* int main(int argc, char const *argv[])
{

	char str1[] = "012345678";
	char str2[] = "345";
	char *istr = ft_strstr(str1, str2);
	if (istr != 0)
		printf("str %s", istr);
	else 
		printf("lol");
	return 0;
} */
