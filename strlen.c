
#include "libft.h"

int	ft_strlen(const char *c)
{
	const char	*cc;

	cc = c;
	while (*cc)
	{
		cc++;
	}
	return (cc - c);
}
