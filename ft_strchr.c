/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:30:28 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:30:30 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
		{
			return ((char *)s);
		}
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char *s = "Hello kimia joon";
	printf("org function: %s\n", strchr(s, 119));
	printf("my function: %s\n", ft_strchr(s, 119));
	return 0;
}*/
