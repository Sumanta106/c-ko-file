#include<stdio.h>
void main()
{
	float a,b,n,price;
	printf("enter price of dozen mangoes \n");
	scanf("%f",&a);
	b=a/12;
	printf("enter number of mangoes you want \n");
	scanf("%f",&n);
	price=b*n;
	printf("price of mango is %.2f",price);
}
