

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			n++;
		}
	}
	return (n);
}

static char	**ft_freeall(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

static int	word_len(char const *s, char c, int i)
{
	int	wc;

	wc = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		wc++;
	}
	return (wc);
}

static char	**fill_array(char **tab, char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (*s)
	{
		i = 0;
		if (*s != c)
		{
			tab[j] = (char *)malloc((word_len(s, c, 0) + 1) * sizeof(char));
			if (!tab[j])
				return (NULL);
			while (*s && *s != c)
				tab[j][i++] = *s++;
			if (!tab[j])
				return (ft_freeall(tab));
			tab[j][i] = '\0';
			j++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	fill_array(tab, s, c, 0);
	return (tab);
}
