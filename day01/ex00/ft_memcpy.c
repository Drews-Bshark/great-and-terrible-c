#include <string.h>
void *memcpy(void *out, void *in, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		((char *)out)[i] = ((char *)in[i];
		i++;
	}
	return(out); 
}
