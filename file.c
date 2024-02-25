#include<stdio.h>
void main()
{
	float l,b,area,perimeter;
		printf("Enter value of l\n");
	scanf("%f",&l);
	printf("Enter value of b\n");
	scanf("%f",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("area is %f",area);
	printf("perimeter is %f",perimeter);
}
