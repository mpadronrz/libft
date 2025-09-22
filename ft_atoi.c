#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (nbr[i] == ' ' || (9 <= nbr[i] && nbr[i] <= 13))
		i ++;
	if (nbr[i] == '-')
	{
		sign = -1;
		i ++;
	}
	else if (nbr[i] == '+')
		i ++;
	while ('0' <= nbr[i] && nbr[i] <= '9')
	{
		n = 10 * n + (nbr[i] - '0');
		i ++;
	}
	return (sign * n);
}
