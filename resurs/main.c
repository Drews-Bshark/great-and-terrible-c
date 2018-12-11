#include <stdio.h>
void bzero(char *b, size_t len);
int main()
{
	char str[] = "hello";
	bzero(str, 2);
	printf("%c", '\n');
	printf("%s", str);
	printf("%c", '\n');
	return(0);
}

