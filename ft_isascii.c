/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:16:09 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:16:12 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char c = '!';
// 	printf("org func: %d\n", isascii(128));
// 	printf("my func: %d", ft_isascii(128));
// 	return 0;
// }
