int ft_recursive_factorial(int nb)
{
	int i;

	i = 1;	
	if (--nb)
		i *=(nb + 1) * ft_recursive_factorial(nb);
	return(i);

}
