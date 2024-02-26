#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	length;
	int		i;

	i = 0;
	length = ft_strlen(s1);
	result = malloc(length + 1);
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
