#include<stdio.h>
void main()
{
	int num[5];
	for(int i=0;i<5;i++)
	{
	printf("enter a nmber:\n");
	scanf("%d",&num[i]);
	}
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+num[i];
	}
	printf("sum is %d",sum);
	int avg=sum/5;
	printf("the average is %d",avg);
	


}


