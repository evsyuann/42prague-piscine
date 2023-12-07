/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:17:24 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/12/07 12:35:35 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words_for_mall(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 0 && is_sep(str[i + 1], charset) == 1)
			++count;
		++i;
	}
	return (count);
}

void	copystr(char *dest, char *src, char *charset)
{
	int		i;

	i = 0;
	while (is_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
}

void	split(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 1)
			++i;
		else
		{
			j = 0;
			while (is_sep(str[i + j], charset) == 0)
				j++;
			array[word] = (char *)malloc(sizeof(char) * (j + 1));
			copystr(array[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;

	words = count_words_for_mall(str, charset);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	array[words] = 0;
	split(array, str, charset);
	return (array);
}

/* int	main(void)
{
	char	**str;
	int		i;
	
	str = ft_split("kek&lol&trol", "&");
	i = 0;
	while (i < 3)
	{
		printf("%s\n", str[i]);
		++i;
	}
	
} */