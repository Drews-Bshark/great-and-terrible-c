void *ft_memmove(void *dest, void *source, size_t count)
{
	int i;

	i = 0;
	while (i < coint)
	{
		dest[i] = source[i];
		i++;
	}
	return(dest);	

}
