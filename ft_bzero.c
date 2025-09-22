#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (s == NULL)
		return ;
	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i ++;
	}
}
