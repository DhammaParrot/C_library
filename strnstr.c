
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	strlen;

	if (!haystack)
		ft_memset(NULL, 1, 1);
	if (*needle != '\0')
	{
		strlen = ft_strlen(needle);
		if (len < strlen)
			return (NULL);
		while (ft_strncmp(haystack, needle, strlen) != 0)
		{
			if (len-- < 1 || *haystack == '\0')
				return (NULL);
			if (len < strlen)
				return (NULL);
			haystack++;
		}
	}
	return ((char *)haystack);
}
