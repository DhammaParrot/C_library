#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*content;
	t_list	*node;

	new_lst = NULL;
	if (!lst)
		return (0);

	while (lst && f)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}