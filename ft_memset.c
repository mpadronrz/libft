#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	a;

	a = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = a;
		i ++;
	}
	return (s);
}
