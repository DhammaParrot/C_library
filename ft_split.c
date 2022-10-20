#include "libft.h"

int	ft_str_count(const char *c, char delim)
{
	int	count;

	count = 0;
	while (*c)
	{
		while (*c == delim)
			c++;

		while (*c != delim && *c != '\0')
		{
			count++;
			while (*c != delim && *c != '\0')
			{
				c++;
			}
		}
	}
	return (count);
}
int	ft_len_word(char const *s, char c)
{
	int	len;

	len = 0;

	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		number_of_strings;
	int 	i;

	i = 0;
	number_of_strings = ft_str_count(s, c);
	p = malloc(sizeof(*p) * (number_of_strings + 1));
	if (!p)
		return (NULL);

	while (*s && (i < number_of_strings))
	{
		while (*s && *s == c)
			s++;

		p[i] = ft_substr(s, 0, ft_len_word(s, c));
		i++;
		while (*s && *s != c)
			s++;
	}
	p[number_of_strings] = 0;
	return (p);
}
