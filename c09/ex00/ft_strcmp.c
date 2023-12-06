/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevsyuti <aevsyuti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:55:51 by aevsyuti          #+#    #+#             */
/*   Updated: 2023/11/23 13:02:10 by aevsyuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		++i;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

/* int main() 
{
  char str1[] = "abcd", str2[] = "abcd", str3[] = "abc";
  int result;

  // comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
} */