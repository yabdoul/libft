
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	if (!s)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len && s[i] && start <= ft_strlen(s))
	{
		p[i] = s[start];
		if (!p[i])
			return (0);
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}