/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:17:24 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/06 14:48:00 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
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
				return (str + i + 1);
			++j;
		}
		else
			j = 0;
		++i;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char **strs;
	char *new_str;
	char *sec_str;
	int i;
	
	i = -1;
	new_str = ft_strstr(str, charset);
	while (new_str != 0)
	{
		sec_str = ft_strstr(new_str, charset);
		if (sec_str != 0)
			strs[++i] = &new_str;
		new_str = sec_str;
	}
	return (strs);
}

int main(void)
{

	char str1[] = "01234567834";
	char str2[] = "34";
	char **istr = ft_split(str1, str2);
	if (istr != 0)
		printf("str %s", istr[0]);
	else 
		printf("lol");
	return 0;
}