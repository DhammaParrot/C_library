
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	ch = c;
	int			str_len;

	if (!s)
		ft_memset(NULL, 1, 1);
	str_len = ft_strlen(s);
	if (ch == '\0')
		return ((char *)(s + str_len));
	while (str_len--)
	{
		if (*(s + str_len) == ch)
			return ((char *)(s + str_len));
	}
	return (NULL);
}
