#include<stdio.h>
int  main()
{
	int a, num[5];
	for(int i=0;i<5;i++)
	{
		printf("enter the nbr:\n");
		scanf("%d",&num[i]);
	}
	
	printf("Enter the number to be checkd");
	scanf("%d",&a);

for(int i=0;i<5;i++){
	if(a==num[i]){
printf("The number belongs to array");
return 0;
	}
}
printf("The number doesnt belongs to array");

return 0;
}

