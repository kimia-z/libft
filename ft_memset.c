/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:27:14 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:27:16 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
// int main(void)
// {
// 	char buffer[10];
// 	char mybuffer[10];
// 	memset(buffer, 'A', sizeof(buffer));
// 	ft_memset(mybuffer, 'B', sizeof(mybuffer));
// 	write(1, buffer, 10);
// 	write(1, mybuffer, 10);
// 	return 0;
// }
