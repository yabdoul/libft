#include <stdlib.h>
#include "libft.h"

size_tft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dsize;
	size_t	ssize;
	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	j = dsize;
	i = 0;
	if (dsize < size - 1 && size > 0)
	{
		while (src[i] && dsize+ i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dsize >= size)
		{
            dsize = size;
            }
	return (dsize + ssize);
}