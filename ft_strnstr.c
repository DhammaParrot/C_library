#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	str_len;

	if (!haystack)
		ft_memset(NULL, 1, 1);
	if (*needle != '\0')
	{
		str_len = ft_strlen(needle);
		if (len < str_len)
			return (NULL);
		while (ft_strncmp(haystack, needle, str_len) != 0)
		{
			if (len-- < 1 || *haystack == '\0')
				return (NULL);
			if (len < str_len)
				return (NULL);
			haystack++;
		}
	}
	return ((char *)haystack);
}
