#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s))
		len = (size_t)ft_strlen(s) - start;
	m = (char *)malloc(len + 1);
	if (!m)
		return (NULL);
	while (index < len)
	{
		*(m + index) = *(s + start + index);
		index++;
	}
	m[len] = '\0';

	return (m);
}