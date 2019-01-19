char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int i;
	
	i = 0;
	str = NULL;
	while(s[i])
		i++;
	str  = (char *)malloc(sizeof(str) * i + 1);
	str[i] = '\0';
	i = 0;
	while(s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return(str);
		

}
