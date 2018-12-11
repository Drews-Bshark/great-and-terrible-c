#include <string.h>

void *ft_memchr(void *buffer, int ch, size_t count)
{
	int i;

	i = 0;
	while(i < count)
	{
		if(((char *)buffr)[i] == (char *)ch)
			return(((char *)buffr)[i]);
		i++;
	}
	return(NULL);
}
