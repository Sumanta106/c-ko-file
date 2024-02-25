#include<stdio.h>
void main()
{
	int i=2,n,rem=0;
	printf("enter the number:");
	scanf("%d",&n);
a:
	rem=n%i;
	i++;
	if(i<n)
	if(rem==0)
		printf("the number is prime");

	goto a;
}
	
