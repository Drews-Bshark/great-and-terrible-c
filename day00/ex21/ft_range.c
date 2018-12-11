#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *range;
	int i;

	i= 0;
	range = (int *)malloc(sizeof(int *) * (max - min));
	while(min < max)
	{
		*(range++) = min;
		min++;
		i++;
	} 
	return (range - i);
}
