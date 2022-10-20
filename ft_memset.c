#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*vstr;

	vstr = (unsigned char *)str;
	while (n--)
	{
		*vstr = c;
		vstr++;
	}
	return (str);
}
