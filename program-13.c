#include<stdio.h>
int main()
{
int n,m,pow=1,i;
printf("Enter the base number\n");
scanf("%d",&n);
printf("Enter the power number\n");
scanf("%d",&m);
for(i=1;i<=m;i++)
pow=pow*i;
printf("The %dth power of %d is %d",m,n,pow);
return 0;
}
