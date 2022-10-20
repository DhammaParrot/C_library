#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*t;

	if (!s1)
		ft_memset(NULL, 1, 1);
	len = ft_strlen(s1);

	t = malloc(len + 1);
	if (!t)
		return (NULL);

	ft_memcpy(t, s1, len);
	t[len] = '\0';

	return (t);
}
