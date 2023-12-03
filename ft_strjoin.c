

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*concat;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat != NULL)
	{
		ft_memcpy(concat, s1, len1 + 1);
		ft_strlcat(concat + len1, s2, len2 + 1);
		concat[len1 + len2] = '\0';
	}
	return (concat);
}
