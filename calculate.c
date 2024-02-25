#include<stdio.h>
#include<stdlib.h>
	void addition(int c)
        {
			printf("the sum is%d",c);
	}
        void subtract(int d)
	{
			printf("the differnece is %d",d);
	}
	void cross(int e)
	{
			printf("the miltipliaction is %d",e);
	}
	void divide(int f)
	{
			printf("the divison is%d",f);
	}
	void modu(int g)
	{
			printf("the mudulas is %d",g);
	}

void main()
{
	
	int a,b;
	int sum,difference,multi,divi,modulas,check;
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	sum=a+b;
	difference=a-b;
	multi=a*b;
	divi=a/b;
	modulas=a%b;
        do
	{

	printf("\npress 1 to add,press 2 to subtract,press 3 to multiply,press 4 to divide,press 5 to modulas,press 6 to exit");
	scanf("%d",&check);

	switch(check)
	{
		case 1: 
			addition(sum);
                        break;
	       case 2:
		      subtract(difference);
		      break;
	       case 3:
		        cross(multi);
		        break;
	       case 4:
			divide(divi);
			break;
	      case 5:
			modu(modulas);
	      		break;
             case 6:
			exit(6);
	      default:
			printf("invalid number");
	}
}while(check!=5);
}
