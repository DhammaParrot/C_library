#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!lst)
		return ;
	lastnode = *lst;
	if (lastnode)
	{
		while (lastnode->next)
			lastnode = lastnode->next;

		lastnode->next = new;
	}
	else
		ft_lstadd_front(lst, new);
}
