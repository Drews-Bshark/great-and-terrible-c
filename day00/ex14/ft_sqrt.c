int ft_sqrt(int nb)
{
	int i;

	i = 0;
       while(i++ <= nb/2)
       {
	       if(i * i == nb)
	       {
		       return(i); 
	       }
       }
       return(0);
}
