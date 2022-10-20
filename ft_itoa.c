#include "libft.h"

int	len(long a)
{
	int	len;

	len = 0;
	if (a < 0)
	{
		a *= -1;
		len++;
	}
	while (a > 0)
	{
		a /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	i = len(nb);
	if (nb == 0)
		i = 1;
	if (!(str = (char *)malloc(i + 1)))
		return (0);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
	return (str);
}
