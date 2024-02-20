/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:18:07 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:18:09 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		uc;

	i = 0;
	s = (const unsigned char *)str;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (*s == uc)
			return ((void *)s);
		i++;
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	// write(1, memchr("Hello world work harder", 119, 23), 23);
	write(1, ft_memchr("Hello world work harder", 119, 23), 23);
	return 0;
}*/
