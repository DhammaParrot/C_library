#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	i = 0;

	p = (char *)malloc(ft_strlen(s) + 1);
	if (!p || !s)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[ft_strlen(s)] = '\0';
	return (p);
}