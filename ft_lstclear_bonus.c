#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;
	t_list	*next;

	if (!lst || !*lst)
		return ;
	pos = *lst;
	while (pos)
	{
		next = pos->next;
		ft_lstdelone(pos, del);
		pos = next;
	}
	*lst = NULL;
}
