#include<stdio.h>
void main()
{
	int a, num[10],sum=0,avg;
	printf("how many elements you want to enter:\n");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		printf("enter a nbr:\n");
		scanf("%d",&num[i]);
	sum=sum+num[i];
	avg=sum/a;
	}
	printf("sum is %d",sum);
	printf("average is %d",avg);
}



