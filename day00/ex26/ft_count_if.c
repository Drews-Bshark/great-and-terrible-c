int ft_count_if(char **tab, int (*f)(char *))
{
	int count;
	int i;
	 
	i = 0;
	count = o;
	while(tab[i])
	{
		if(f(tab[i++]) == 1)
		count++;
	}
	return(count);
}
