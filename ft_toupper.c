
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 0141 && c <= 0172)
		return (c - 32);
	else
		return (c);
}
