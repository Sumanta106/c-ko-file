#include<stdio.h>
void main()
{
int n, i;
int *num;
printf("Enter No. of element in your array: ");
scanf("%d", &n);
num = (int *) calloc (n, sizeof(int));
printf("\n Enter %d integers: \n", n);
for(i = 0; i < n; i++)
scanf("%d", num + i);
minmax(num, n);
}

void minmax(int *no,int n)
{
int i;
int min, max;
max = *no;
min = *no;
for(i=0; i < n; i++)
{
if(max < *(no + i))
max = *(no =i);
if(min > *(no + i))
min = *(no + i);
}
printf("Min = %d, Max = %d", min, max):
}

