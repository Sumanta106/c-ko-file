#include<stdio.h>
void main()
{
	int i=0,n,sum=0,rem=0;
a:
	printf("enter the number:");
	scanf("%d",&n);
	rem=n%2;
	if(rem==0)
	{
		sum=sum+n;
	}
	i++;
	if(i<5)
		goto a;
	printf("sum of even only:%d",sum);
}

