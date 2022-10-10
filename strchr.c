
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	ch = c;

	if (!s)
		ft_memset(NULL, 1, 1);
	while (*s != ch)
	{
		if (*s == '\0')
			return (0);
	s++;
	}
	return ((char *)s);
}
