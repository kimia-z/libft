/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kziari <kziari@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:13:06 by kziari            #+#    #+#             */
/*   Updated: 2023/10/22 18:13:09 by kziari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int main(void)
{
	printf("org function %d\n", atoi(" \n -12345fs"));
	printf("my function %d\n", ft_atoi(" \n -12345fs"));
	return 0;
}*/
