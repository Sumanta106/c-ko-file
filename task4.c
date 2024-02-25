#include<stdio.h>
#define size 50
void main()
{
	int n,i,a[size],key;
	printf("enter no of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elements:\n");
		scanf("%d",&a[i]);
	}
	printf("enter element to search :\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
			break;
	}
	if(i!=n)
:		printf("ket found");
	else
		printf("key not found");
}

