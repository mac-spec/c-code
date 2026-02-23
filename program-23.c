#include<stdio.h>
int main()
{
int row,i,col,s,j,in,inn,ss;
printf("Enter row and column number\n");
scanf("%d %d",&row,&col);
printf("Enter array elements\n");
int a[row][col];
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    scanf("%d",&a[i][j]);
}
int ar[row];
for(i=0;i<row;i++)
    ar[i]=0;
int arr[row];
for(i=0;i<row;i++)
    arr[i]=0;
    in=1;
for(i=0;i<row;i++)
{
    s=0;
for(j=0;j<col;j++)
{
s=s+a[i][j];
}
ar[i]=s;
}
printf("The sum of the row is ");
for(i=0;i<row;i++)
printf("%d ",ar[i]);
int max=ar[0];
for(i=0;i<row;i++)
{
if(ar[i]>max)
{
max=ar[i];
in=i+1;
}
}
printf("\nRow %d has the maximum value",in);

for(i=0;i<row;i++)
{ ss=0;
for(j=0;j<col;j++)
{

ss=ss+a[j][i];
}
arr[i]=ss;
}
inn=1;
printf("\nThe sum of the column is ");
for(i=0;i<row;i++)
printf("%d ",arr[i]);
int maxx=arr[0];
for(i=0;i<row;i++)
{
if(arr[i]>maxx)
{
maxx=arr[i];
inn=i+1;
}
}
printf("\nColumn %d has the maximum value",inn);
return 0;
}
