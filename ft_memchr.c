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
