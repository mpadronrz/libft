#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str_dest;
	const unsigned char	*str_src;
	size_t				i;

	str_dest = (unsigned char *)dest;
	str_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i ++;
	}
	return (dest);
}
