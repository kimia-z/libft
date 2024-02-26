#include "libft.h"

static int	ft_sumlen(char const *s1, char const *s2)
{
	int	len;
	int	start;

	len = 0;
	start = 0;
	while (s1[len])
		len++;
	while (s2[start])
	{
		len++;
		start++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		start;

	i = 0;
	start = 0;
	result = malloc((ft_sumlen(s1, s2) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[start])
	{
		result[i] = s2[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
