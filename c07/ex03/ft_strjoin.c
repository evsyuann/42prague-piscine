/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:12:07 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/05 11:58:41 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int	len_for_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += my_strlen(strs[i]);
		++i;
	}
	len += my_strlen(sep) * size -1 ;
	if (size <= 0)
		len = 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		i;
	int		j;
	int		curr_char;

	i = -1;
	curr_char = -1;
	new_str = (char *) malloc (len_for_malloc(size, strs, sep) * sizeof(char));
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			new_str[++curr_char] = strs[i][j];
			++j;
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			new_str[++curr_char] = sep[j];
			++j;
		}
	}
	new_str[++curr_char] = '\0';
	return (new_str);
}

/* int main(void)
{
	char str1[] = "Hello";
	char str2[] = "hillow";
	char str3[] = "world";
	char sep[] = ", ";
	char *strings[] = {str1, str2, str3};
	printf("%s\n", ft_strjoin(3 ,strings, sep));
	return 0;
}  */
