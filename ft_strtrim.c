/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:33:54 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:33:56 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]))
		j--;
	if (i > j)
		i = j;
	result = malloc (j - i + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + i, j - i + 1);
	return (result);
}
/*
int	main(void)
{
	write(1, ft_strtrim(" !hello! ", "! ."), 9);
	return 0;
}*/
