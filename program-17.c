#include<stdio.h>
int main()
{
int i,j,s=0,row,col,s1=0,s2;
printf("Enter the row and column of the array :\n");
scanf("%d %d",&row,&col);
int arr[row][col];
printf("Enter the array elements: \n");
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
scanf("%d",&arr[i][j]);}
for(i=0;i<col;i++)
s=s+(arr[0][i]+arr[row-1][i]);
for(i=1;i<row-1;i++)
{
for(j=0;j<col-1;j++)
{if(i==j)
s1=s1+arr[i][j];
}
}
s2=s+s1;
printf("%d",s2);
return 0;
}
