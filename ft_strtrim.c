#include "libft.h"

int	ft_is_in_set(char *haystack, char needle)
{
	while (*haystack)
	{
		if (*haystack == needle)
			return (1);
		haystack++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == 0 || set == 0)
		return (0);
	while (start < end)
	{

		if (ft_is_in_set((char *)set, s1[start]) == 0)
			break ;
		start++;
	}
	if (start == end)
		return (ft_strdup(""));
	else
	{
		while (start < end)
		{
			if (ft_is_in_set((char *)set, s1[end - 1]) == 0)
				break ;
			end--;
		}
	}
	return ((char *)ft_substr(s1, start, end - start));
}