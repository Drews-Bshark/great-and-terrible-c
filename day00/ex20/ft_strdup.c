#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
char *ft_strdup(char *src)
{
	int i;
	char *str;

	i = ft_strlen(src);
	if(!(str = (char*) malloc(sizeof (char*) * (i + 1))))
		return(NULL);
	i = -1;
	while(src[++i])
		str[i] = src[i];
	str[i] = '\0';
	return(str);
}
