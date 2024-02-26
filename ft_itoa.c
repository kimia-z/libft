#include "libft.h"

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		intlen;
	long	number;

	number = n;
	intlen = ft_intlen(number);
	result = malloc(sizeof(char) * (intlen + 1));
	if (!result)
		return (NULL);
	result[intlen] = '\0';
	if (number == 0)
		result[0] = '0';
	if (number < 0)
	{
		result[0] = '-';
		number *= -1;
	}
	while (number)
	{
		result[intlen - 1] = (number % 10) + '0';
		number /= 10;
		intlen--;
	}
	return (result);
}
