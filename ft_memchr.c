#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	if (!s)
		ft_memset(NULL, 1, 1);
	while (str && n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
