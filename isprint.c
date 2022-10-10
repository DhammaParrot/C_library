
#include "libft.h"

char	ft_isprint(unsigned char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
