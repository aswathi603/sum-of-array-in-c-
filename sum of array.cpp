#include <stdio.h>
int main()
{
	int sum=0,k,x[6];
	printf("enter array elements");
	for(k=0;k<6;k++)
	{
		scanf("%d",&x[k]);
	}
	for(k=0;k<=5;k++)
	{
		sum=sum+x[k];
	}
	printf("sum of array:%d",sum);
}
