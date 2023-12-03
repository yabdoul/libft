

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*chaine;
	size_t	length;
	size_t	i;

	length = ft_strlen(s);
	i = 0;
	if (s == NULL || start >= length)
		return (ft_strdup(""));
	if (len > (length - start))
		len = length - start;
	chaine = (char *)malloc((len) + 1);
	if (!chaine)
		return (NULL);
	while ((i + start) < length && i < len)
	{
		chaine[i] = s[i + start];
		i++;
	}
	chaine[i] = 0;
	return (chaine);
}
