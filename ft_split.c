#include "libft.h"

static void	ft_freeup(char **s, int i)
{
	while (i > 0)
	{
		free(s[i - 1]);
		i--;
	}
	free(s);
}

static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (!s[i + 1] && s[i] != c)
			count++;
		if (i != 0 && s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_buildstr(char const *s, int len)
{
	char	*str;

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	result = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	result[ft_wordcount(s, c)] = NULL;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		result[i] = ft_buildstr(s, ft_wordlen(s, c));
		if (!result[i])
		{
			ft_freeup(result, i);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
		i++;
	}
	return (result);
}
