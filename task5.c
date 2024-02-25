#include<stdio.h>
#define row 3
#define col 3
void main()
{       
        int i,j,a[row][col];
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("enter numbeer:\n");
                        scanf("%d",&a[i][j]);
		}
        }
        printf("the matrix is:\n");
	for( i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}







