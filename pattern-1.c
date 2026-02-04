#include<stdio.h>
int main()
{
int row;
scanf("%d",&row);
int i,j,k,h,a=1,b=(row*row)+1;
for(i=row;i>0;i--)
{
for(j=1;j<=row-i;j++)
{
printf("--");
}
for(k=1;k<=i;k++)
{
printf("%d",a++);
printf("*");
}
for(h=1;h<=i-1;h++)
{
printf("%d",b++);
printf("*");
}
printf("%d",b);
printf("\n");
b=b-2*(i-1);
}
return 0;
}
