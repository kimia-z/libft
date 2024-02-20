/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:17:12 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:17:15 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char c = '^';
// 	printf("org func: %d\n", isprint(127));
// 	printf("my func: %d\n", ft_isprint(127));
// 	return 0;
// }
