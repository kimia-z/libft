/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:33:37 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:33:40 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			len;

	len = ft_strlen(s);
	uc = (unsigned char)c;
	if (uc == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		len--;
		if (s[len] == uc)
		{
			return ((char *)s + len);
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s[40];
	printf("org function : %s\n", strrchr(s, 119));
	printf("my function : %s\n", ft_strrchr(s, 119));
}*/
