#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ss;

	ss = s;
	while (n--)
	{
		*ss = 0;
		ss++;
	}
}
