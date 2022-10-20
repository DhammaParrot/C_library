#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*link;
	t_list	*temp;

	link = *lst;
	if (!lst)
		return ;
	while (link)
	{
		temp = link->next;
		del(link->content);
		free(link);
		link = temp;
	}
	*lst = NULL;
}
