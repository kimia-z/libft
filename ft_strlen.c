/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:32:01 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:32:02 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	return (length);
}
// int main(void)
// {
// 	const char *s = "hello 42 +fduys/\n";
// 	printf("org func: %zu\n", strlen(s));
// 	printf("my func: %zu\n", ft_strlen(s));
// 	return 0;
// }
