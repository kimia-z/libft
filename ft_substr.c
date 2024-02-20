/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:35:07 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:35:10 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_string(void)
{
	char	*result;

	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	slen;
	size_t	max_l;

	i = 0;
	if (start >= ft_strlen(s))
		return (empty_string());
	slen = ft_strlen(s + start);
	if (slen > len)
		max_l = len;
	else
		max_l = slen;
	result = malloc(max_l * sizeof(char) + 1);
	if (!result)
		return (NULL);
	result[max_l] = '\0';
	while (s[start] && i < len)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	return (result);
}
/*
int main(void)
{
	char const *s = "salam khobi kimia?";
	write(1, ft_substr(s, 6, 9), 9);
	return 0;
}*/
