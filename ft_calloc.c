#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	if (size != 0)
		if (count > SIZE_MAX / size)
			return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}