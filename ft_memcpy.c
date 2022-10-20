#include "libft.h"
// add reference to memmove
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (dst == src)
		return (dst);
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
