#include <stdio.h>

int main()
{
	printf("please input ten numbers:\n");
	int i,j;
	int a[10],b[10];
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0,j = 9;i < 10;i++,j--)
	{
		b[j] = a[i];
	}
	for(j = 0;j < 10;j++)
	{
		printf("%-5d",b[j]);
	}
	return 0;
}
