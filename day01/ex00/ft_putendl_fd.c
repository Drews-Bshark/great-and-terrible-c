#include <unistd.h>

void ft_putendl_fd(char const *s, int fd)
{
	int i;
	char str;

	str = '\n';
	i = -1;
	while(s[++i])
		write(fd,&s[i],1);
	write(fd,str,1);

}