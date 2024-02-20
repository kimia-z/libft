/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:26:32 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:26:34 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!(dest || src))
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	// char dest[20];
	// char *src = "hello, world!";
	// // write(1, memcpy(dest, src, 7), 7);
	// write(1, ft_memcpy(dest, src, 7), 7);
	// return 0;
	char csrc[100] = "Geeksfor";  
	ft_memcpy(csrc+5, csrc, strlen(csrc)+1);  
	write(1, csrc, 25);
	return 0;  
}*/
