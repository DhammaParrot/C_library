#include "libft.h"

static	size_t	ft_strnlen(char *str, size_t max)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	if (i <= max)
		return (i);
	else
		return (max);
}
// if dsize is too small for dst or if dst not null terminated
// dont null terminate as concatenating whole src which
// already null terminates
// null terminate as you are truncating the src and concatenating
	// so you must null terminate

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strnlen(dst, dsize);
	if (destlen == dsize)
		return (dsize + srclen);
	if (srclen < dsize - destlen)
	{
		ft_memcpy(dst + destlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + destlen, src, dsize - destlen - 1);
		dst[dsize - 1] = '\0';
	}
	return (destlen + srclen);
}
