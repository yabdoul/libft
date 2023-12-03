

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (!(*lst))
		(*lst) = new;
	else
	{
		l = ft_lstlast(*lst);
		l->next = new;
	}
}
