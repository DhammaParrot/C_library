#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
	


	printf("%s\n",ft_strchr("tripouille", 't' + 256));
	printf("%s\n",strchr("tripouille", 't' + 256));
	printf("%s\n",ft_strrchr("tripouille", 't' + 256));
	printf("%s\n",strrchr("tripouille", 't' + 256));
	

 
}