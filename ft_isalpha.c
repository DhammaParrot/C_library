#include "libft.h"

int	ft_isalpha(int d)
{
	return (((d >= 'a') && (d <= 'z')) || ((d >= 'A') && (d <= 'Z')));
}
