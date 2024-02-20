/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:13:42 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:13:45 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
// int main(void)
// {
// 	int i = 0;
// 	size_t n = 10;
// 	unsigned char s[10];
// 	//bzero(s, n);
// 	ft_bzero(s, n);
// 	while(i < 10)
// 	{
// 		printf("%x", s[i]);
// 		i++;
// 	}
// 	return 0;
// }
