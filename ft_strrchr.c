#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*pos;
	char	a;

	a = (unsigned char)c;
	pos = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			pos = (char *)&s[i];
		i ++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	return (pos);
}
