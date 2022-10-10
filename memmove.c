
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*dend;
	const char	*send;

	if (!src && !dst)
		return (0);
	d = dst;
	s = src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		dend = d + (len - 1);
		send = s + (len - 1);
		while (len--)
			*dend-- = *send--;
	}
	return (dst);
}
