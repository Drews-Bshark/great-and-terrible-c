void bzero(char *b, size_t len)
{
	size_t i;

	i =0;
	while(i < len)
		b[i++] = 0;
}
