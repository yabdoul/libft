
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if ((!big || !little) && len == 0)
		return (0);
	little_len = ft_strlen(little);
	i = 0;
	if (little_len == 0)
		return ((char *)big);
	while (big[i] && i + little_len <= len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
