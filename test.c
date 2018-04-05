#include<stdio.h>
int main()
{
	int i = 0;
	char a[10] = "hello";
	for(i=0;i<10;i++)
	{
		int i = 8;
		printf("INSIDE %d\n",i);
	}
	printf("%d %s\n",i,a);

}
