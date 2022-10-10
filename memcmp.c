
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1v = (const unsigned char *)s1;
	const unsigned char	*s2v = (const unsigned char *)s2;

	while (n--)
	{
		if (*s1v != *s2v)
			return ((int)(*s1v - *s2v));
		s1v++;
		s2v++;
	}
	return (0);
}
