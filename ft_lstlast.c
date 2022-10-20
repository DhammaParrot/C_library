#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);

	while (len - 1 > 0)
	{
		len--;
		lst = lst->next;
	}
	return (lst);
}
