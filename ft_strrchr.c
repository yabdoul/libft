

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	*res;

	res = NULL;
	index = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
			res = (char *)(s + index);
		index++;
	}
	if (s[index] == (unsigned char)c)
	{
		res = (char *)(s + index);
	}
	return (res);
}
