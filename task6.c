#include<stdio.h>
void main()
{
int i,j,A[2][3],B[2][3];
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("enter a num:\n");
		scanf("%d",&A[i][j]);
	
	}

}
printf("A matrix is:\n");

for(i=0;i<2;i++)
{
        for(j=0;j<3;j++)
        {
       
                printf("%d\t",A[i][j]);


        }
	printf("\n");
}
//for B


for(i=0;i<2;i++)
{
        for(j=0;j<3;j++)
        {
                printf("enter a num:\n");
                scanf("%d",&B[i][j]);

        }

}
printf("B matrix is:\n");

for(i=0;i<2;i++)
{
        for(j=0;j<3;j++)
        {

                printf("%d\t",B[i][j]);


        }
        printf("\n");

}
}

