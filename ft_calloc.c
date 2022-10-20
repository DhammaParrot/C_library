#include "libft.h"

/* void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t 	cnt;
	p = (char *)malloc(count * size);
	if(p==NULL)
		return NULL;
	cnt = 0;

	while (cnt < count * size){
		*(p+cnt++) = 0;

	}

		//ft_memset(p, 0, count * size);

	return ((void *)p);
} */
void	*ft_calloc(size_t n_ele, size_t size_ele)
{
	char	*dyn_ptr;
	size_t	cnt;
	dyn_ptr = (char *) malloc(n_ele * size_ele);
	if (dyn_ptr == NULL)
		return (NULL);
	cnt = 0;
	while (cnt < n_ele * size_ele)
		*(dyn_ptr + cnt++) = 0;
	return ((void *) dyn_ptr);
}