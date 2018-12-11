#include <stdio.h>
void *ft_memset(void *destination, int c, size_t n);
int main()
{
	//int i;
	//i = 0;
	char str[] = "1234567";
	//int str[] = {1,2,3,3,4,8,9};
	//while(i < 7)
        //{
                printf("%s",str);
                printf("%c", '\n');
        //}
	//i = 0;
	ft_memset(str, '1', 6);
	//while(i < 7)
	//{
		printf("%s",str);
		printf("%c", '\n');
	//}
	return(0);
}

