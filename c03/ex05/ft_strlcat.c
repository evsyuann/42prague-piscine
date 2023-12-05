/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:14:04 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/27 11:27:42 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dest;
	unsigned int	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = size_dest;
	j = 0;
	if (size == 0 || size_dest <= size)
		return (size_src + size);
	while (src[j] != '\0' && j < size - 1 - size_dest)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (size_dest + size_src);
}

/* int main()
{
    char first[] = "This is ";
    char last[] = "good game";
	int size_dest = ft_strlen(first);
	int size_src = ft_strlen(last);
    int r;
    int size = 7;

    r = ft_strlcat(first,last,size);

    printf("%s\n", first);
    printf("Value returned: %d\n",r);
	printf("size_dest: %d\n",size_dest);
	printf("size_src: %d\n",size_src);

    return(0);
} */