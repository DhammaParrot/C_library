#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memmove(p, s1, ft_strlen(s1));
	ft_memmove(p + ft_strlen(s1), s2, ft_strlen(s2));
	p[len] = '\0';
	return (p);
}
