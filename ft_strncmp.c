/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:32:30 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:32:31 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0 && (*str1 || *str2))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		n--;
		str1++;
		str2++;
	}
	return (0);
}

// int main(void)
// {
// 	printf ("org function: %d\n", strncmp("fello", "hell", 2));
// 	printf ("my function: %d\n", ft_strncmp("fello", "hell", 2));
// 	return 0;
// }
