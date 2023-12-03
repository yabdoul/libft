

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	if (!nmemb && !size && (nmemb >= SIZE_MAX / size))
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt != NULL)
		ft_bzero(pt, nmemb * size);
	else
		return (NULL);
	return (pt);
}
