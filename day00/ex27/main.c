#include <stdio.h>
#include <fcntl.h>
#define BIZE_SIZE 20
#include <in.h>

int main (int  argc, char **argv)
{
	int flag;
	int  red;
	char str[BIZE_SIZE + 1];

	if(argc < 2)
	{
		ft_putstr("File name missing.\n ");
		return(0);

	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return(0);
	}
	flag = open(argv[1],O_RDONLY);
	if (flag == -1)
	{
		ft_putstr("open() error\n");
		return(0);
	}
	while(red = fread(flag, str, BIZE_SIZE))
	{
		str[red] = '\0';
		ft_putstr(str);
	}
	if(pclose(flag) == -1)
	{
		ft_putstr("close() error\n");
		return(-1);
	}
	return(0);
}
