#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	len = ft_strlen(s);
	res = ft_calloc(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i ++;
	}
	return (res);
}
