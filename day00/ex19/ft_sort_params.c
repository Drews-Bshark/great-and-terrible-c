void 	ft_putchar(char c);
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
int ft_strcmp ( char *s1, char *s2)
{
	int i;

	i = 0 ;
	while (s1 [i] == s2 [i] && s1 [i] != '\0' && s2 [i] != '\0' )
		i++;
	return (s1 [i] - s2 [i]);
}
void  ft_sort_params(int argc, char **argv)
{
	int i;
	char *tmp;
	int  flag;
	
	flag = 1;
	i = 1;
	while(flag)
	{
		flag = 0;
		while(i < argc - 1)
		{
			if(ft_strcmp(argv[i + 1], argv[i]) < 0)
			{
				tmp =  argv[i];
				argv[i] = argv[i + 1];
			       	argv[i + 1] = tmp;
				flag = 1;	
			}
			i++;
		}
		i = 0;

	}
}
void ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
int main (int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return(0);
}
