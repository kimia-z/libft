#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	total;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(0));
	result = malloc(total);
	if (!(result))
		return (NULL);
	ft_bzero(result, total);
	return (result);
}
