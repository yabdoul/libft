

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 0101 && c <= 0132)
		return (c + 32);
	else
		return (c);
}
